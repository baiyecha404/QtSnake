#include <Qtimer>
#include <QColor>
#include <time.h>
#include <random>
#include <vector>
#include <QPainter>
#include <string.h>
#include <windows.h>
#include <dialog3.h>
#include <iostream>

#include "gamepanel.h"
#include "ui_gamepanel.h"


#define random(x) rand()%(x)

int max_fps=1;
int difficulty=5;
bool difficultyChanged;
bool paused=false;


std::vector<std::pair<int,int> > snake;
std::vector<std::pair<int,int> > ai_snake;
std::vector<int> direction;
int last_direction=0;
int ai_direction=0;
bool ai_snake_die=false;
std::pair<int,int> food;
std::pair<int,int> ai_food;
int score=0;
int ai_score=0;

void GamePanel::paintEvent(QPaintEvent*)
//paintEvent函数由系统自动调用，用不着我们人为的去调用。
{
    //    paint->setPen(QPen(Qt::blue,4,Qt::DashLine));//设置画笔形式
    QPainter painter(this);
    QColor blue=QColor(130,200,250);
    painter.setBrush(QBrush(blue,Qt::SolidPattern));//设置画刷形式
    painter.drawRect(60*snake[0].first+25,60*snake[0].second+25,50,50);
    if (this->mode==2)
        painter.drawRect(60*ai_snake[0].first+965,60*ai_snake[0].second+25,50,50);

    QColor black=QColor(0,0,0);
    painter.setBrush(QBrush(black,Qt::SolidPattern));//设置画刷形式
    if (last_direction<=2)
    {
        painter.drawEllipse(QPointF(60*snake[0].first+35,60*snake[0].second+50),5,5);
        painter.drawEllipse(QPointF(60*snake[0].first+65,60*snake[0].second+50),5,5);
    }
    if (last_direction>2)
    {
        painter.drawEllipse(QPointF(60*snake[0].first+50,60*snake[0].second+35),5,5);
        painter.drawEllipse(QPointF(60*snake[0].first+50,60*snake[0].second+65),5,5);
    }
    if (mode==2)
    {
        if (ai_direction<=2)
        {
            painter.drawEllipse(QPointF(60*ai_snake[0].first+975,60*ai_snake[0].second+50),5,5);
            painter.drawEllipse(QPointF(60*ai_snake[0].first+1005,60*ai_snake[0].second+50),5,5);
        }
        if (ai_direction>2)
        {
            painter.drawEllipse(QPointF(60*ai_snake[0].first+990,60*ai_snake[0].second+35),5,5);
            painter.drawEllipse(QPointF(60*ai_snake[0].first+990,60*ai_snake[0].second+65),5,5);
        }
    }

// TODO triangle tail
    painter.setBrush(QBrush(Qt::green,Qt::SolidPattern));
      if (snake.size()>1)
          for (unsigned int i=0;i<snake.size()-1;i++)
              if (snake[i].first==snake[i+1].first)
                  painter.drawRect((snake[i].first+snake[i+1].first)/2*60+25,(snake[i].second+snake[i+1].second)/2*60+75,50,10);
              else
                  painter.drawRect((snake[i].first+snake[i+1].first)/2*60+75,(snake[i].second+snake[i+1].second)/2*60+25,10,50);
      if (mode==2)
          if (ai_snake.size()>1)
              for (unsigned int i=0;i<ai_snake.size()-1;i++)
                  if (ai_snake[i].first==ai_snake[i+1].first)
                      painter.drawRect((ai_snake[i].first+ai_snake[i+1].first)/2*60+965,(ai_snake[i].second+ai_snake[i+1].second)/2*60+75,50,10);
                  else
                      painter.drawRect((ai_snake[i].first+ai_snake[i+1].first)/2*60+1015,(ai_snake[i].second+ai_snake[i+1].second)/2*60+25,10,50);

    QColor darkBlue=QColor(160,220,250);
    painter.setBrush(QBrush(darkBlue,Qt::SolidPattern));//设置画刷形式
    for (unsigned int i=1;i<snake.size();i++)
        painter.drawRect(60*snake[i].first+25,60*snake[i].second+25,50,50);
    if (mode==2)
        for (unsigned int i=1;i<ai_snake.size();i++)
            painter.drawRect(60*ai_snake[i].first+965,60*ai_snake[i].second+25,50,50);


    painter.setBrush(QBrush(Qt::red,Qt::SolidPattern));//设置画刷形式
    painter.drawRect(60*food.first+25,60*food.second+25,50,50);
    if (mode==2)
        painter.drawRect(60*ai_food.first+965,60*ai_food.second+25,50,50);

    painter.setBrush(QBrush(Qt::black,Qt::SolidPattern));
    painter.drawRect(930,0,10,930);
    painter.end();
}

void GamePanel::endGame()
{
    this->timer->stop();
    this->close();
    dialog3=new Dialog3(score, this);
    dialog3->show();
    this->setAttribute(Qt::WA_DeleteOnClose);
}

std::pair<int,int> GamePanel::generateFood()
{
    std::vector<std::pair<int,int> > tmp;
    tmp.clear();
    for (int i=0;i<15;i++)
        for (int j=0;j<15;j++)
        {
            if (this->board[i][j]==0)
                tmp.push_back(std::make_pair(i,j));
        }
    int tmpp=random(tmp.size());
    board[tmp[tmpp].first][tmp[tmpp].second]=2;
    return tmp[tmpp];
}

std::pair<int,int> GamePanel::ai_generateFood()
{
    std::vector<std::pair<int,int> > tmp;
    tmp.clear();
    for (int i=0;i<15;i++)
        for (int j=0;j<15;j++)
        {
//            if (i==0 || j==0 || i==14 || j==14)
            if (this->ai_board[i][j]==0)
                tmp.push_back(std::make_pair(i,j));
        }
    int tmpp=random(tmp.size());
    ai_board[tmp[tmpp].first][tmp[tmpp].second]=2;
    return tmp[tmpp];
}

bool GamePanel::ai_move_judge(int x,int y)
{
    if (x<0 || y<0 || x>14 || y>14)
        return false;
    for (unsigned int j=1;j<ai_snake.size();j++)
        if(x==ai_snake[j].first && y==ai_snake[j].second)
        {
            return false;
        }
    return true;
}

int GamePanel::change_aiDirection()
{
    if (ai_food.second>ai_snake[0].second)
        ai_direction=2;
    if (ai_food.second<ai_snake[0].second)
        ai_direction=1;
    if (ai_food.first>ai_snake[0].first)
        ai_direction=4;
    if (ai_food.first<ai_snake[0].first)
        ai_direction=3;

    int dx[]={0,0,0,-1,1};
    int dy[]={0,-1,1,0,0};
    switch (ai_direction) {
    case 1:
        if (!this->ai_move_judge(ai_snake[0].first+dx[1],ai_snake[0].second+dy[1]))
        {
            if (this->ai_move_judge(ai_snake[0].first+dx[3],ai_snake[0].second+dy[3]))
                ai_direction=3;
            else
            if (this->ai_move_judge(ai_snake[0].first+dx[4],ai_snake[0].second+dy[4]))
                ai_direction=4;
            else
                ai_direction=2;
        }

        break;
    case 2:
        if (!this->ai_move_judge(ai_snake[0].first+dx[2],ai_snake[0].second+dy[2]))
        {
            if (this->ai_move_judge(ai_snake[0].first+dx[4],ai_snake[0].second+dy[4]))
                ai_direction=4;
            else
                if (this->ai_move_judge(ai_snake[0].first+dx[3],ai_snake[0].second+dy[3]))
                ai_direction=3;
            else
                ai_direction=1;
        }

        break;
    case 3:
        if (!this->ai_move_judge(ai_snake[0].first+dx[3],ai_snake[0].second+dy[3]))
        {
            if (this->ai_move_judge(ai_snake[0].first+dx[1],ai_snake[0].second+dy[1]))
                ai_direction=1;
            else
            if (this->ai_move_judge(ai_snake[0].first+dx[2],ai_snake[0].second+dy[2]))
                ai_direction=2;
            else
                ai_direction=4;
        }

        break;
    case 4:
        if (!this->ai_move_judge(ai_snake[0].first+dx[4],ai_snake[0].second+dy[4]))
        {
            if (this->ai_move_judge(ai_snake[0].first+dx[2],ai_snake[0].second+dy[2]))
                ai_direction=2;
            else
            if (this->ai_move_judge(ai_snake[0].first+dx[1],ai_snake[0].second+dy[1]))
                ai_direction=1;
            else
                ai_direction=3;
        }

        break;
    }

//    if (ai_snake[0].second==0)
//        if (ai_snake[0].first!=9)
//         ai_direction=4;
//        else
//            ai_direction=2;
//     if (ai_snake[0].first==14)
//         ai_direction=2;
//     if (ai_snake[0].second==14)
//         ai_direction=3;
//     if (ai_snake[0].first==0)
//         ai_direction=1;
//     if (ai_snake[0].first==0 && ai_snake[0].second==0)
//         ai_direction=4;
//    std::cout<<ai_snake[0].first;
    return ai_direction;
}

void GamePanel::ai_snake_move()
{
    if(!ai_score)ui->label_4->setNum(0);
    if (!ai_direction)
        return;
   if (ai_snake_die)
        return;
    int dx[]={0,0,0,-1,1};
    int dy[]={0,-1,1,0,0};
    ai_direction=change_aiDirection();
    for (int i=1;i<=4;i++)
        if (ai_direction==i)
        {
            if (ai_snake[0].first+dx[i]<0 || ai_snake[0].first+dx[i]>=15 || ai_snake[0].second+dy[i]<0 || ai_snake[0].second+dy[i]>=15)
                ai_snake_die=true;
            for (unsigned int j=1;j<ai_snake.size();j++)
                if(ai_snake[0].first+dx[i]==ai_snake[j].first && ai_snake[0].second+dy[i]==ai_snake[j].second)
                    ai_snake_die=true;

            if (ai_snake_die)
                break;
            ai_snake.insert(ai_snake.begin(),std::make_pair(ai_snake[0].first+dx[i],ai_snake[0].second+dy[i]));
            if (ai_snake[0]==ai_food)
            {
                ai_food=ai_generateFood();
                ai_score+=10;
               ui->label_4->setNum(ai_score);
            }
            else
            {
                this->ai_board[ai_snake.back().first][ai_snake.back().second]=0;
                ai_snake.pop_back();
            }
            this->ai_board[ai_snake[0].first][ai_snake[0].second]=1;
        }
//    std::cout<<ai_score;
}

void GamePanel::snake_move()
{
    //printf("%d\n",difficulty);
    if(paused)
        return;
    if(!score) ui->label->setNum(0);
    if (difficultyChanged)
    {
        this->timer->stop();
        this->timer->start(500/difficulty);
        difficultyChanged=false;
    }
    int choosedWay=0;
    int dx[]={0,0,0,-1,1};
    int dy[]={0,-1,1,0,0};

    if(!direction.empty())
    {//heihei
        for (std::vector<int>::iterator it=direction.begin();it!=direction.end();it++)
            if ((*it)*last_direction!=2 && (*it)*last_direction!=12)
                choosedWay=(*it);
        direction.clear();
    }

    if (choosedWay==0)
        choosedWay=last_direction;
    else
    {
        last_direction=choosedWay;
        if (mode==2)
            ai_direction=1;
    }
    for (int i=1;i<5;i++)
    {
        if (choosedWay==i)
        {
            if (snake[0].first+dx[i]<0 || snake[0].first+dx[i]>=15 || snake[0].second+dy[i]<0 || snake[0].second+dy[i]>=15)
                endGame();
            if (this->board[snake[0].first+dx[i]][snake[0].second+dy[i]]==1)
                endGame();
            snake.insert(snake.begin(),std::make_pair(snake[0].first+dx[i],snake[0].second+dy[i]));
            if (snake[0]==food)
            {
                food=generateFood();
                score+=10;
                ui->label->setNum(score);
            }
            else
            {
                this->board[snake.back().first][snake.back().second]=0;
                snake.pop_back();
            }
            this->board[snake[0].first][snake[0].second]=1;
        }
    }
    if (mode==2)
        GamePanel::ai_snake_move();
    GamePanel::update();
}



GamePanel::GamePanel(int mode,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GamePanel)
{
    ui->setupUi(this);
    srand(time(NULL));

    //初始化变量
    memset(this->board,0,sizeof(this->board));
    snake.clear();
    ai_snake.clear();
    direction.clear();

    this->mode=mode;
    if (this->mode==2) {
        this->setFixedSize(1880,930);
        ui->label_3->move(QPoint(1780,0));
        ui->label_4->move(QPoint(1780,30));
    }
    else {
        this->setFixedSize(930,930);
        ui->label_3->setVisible(false);
        ui->label_4->setVisible(false);
    }

    score=0;
    last_direction=0;
    snake.push_back(std::make_pair(7,7));
    snake.push_back(std::make_pair(7,8));
    this->board[7][7]=1;
    this->board[7][8]=1;
    food=generateFood();

    if (mode==2)
    {
        ai_score=0;
        ai_direction=0;
        ai_snake_die=false;
        ai_snake.push_back(std::make_pair(7,7));
        ai_snake.push_back(std::make_pair(7,8));
        this->ai_board[7][7]=1;
        this->ai_board[7][8]=1;
        ai_food=ai_generateFood();
//        std::cout<<ai_food.first<<' '<<ai_food.second;
    }

    timer=new QTimer(this);
    connect(this->timer,SIGNAL(timeout()),this,SLOT(snake_move()));
    this->timer->start(500/difficulty);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    this->setPalette(palette);
    //    this->mousedown=false;
    //    this->release=false;
    //初始化画布
    //    QPixmap pix;
    QPixmap pixmap(800, 800);
    pixmap.fill(Qt::white);
}

GamePanel::~GamePanel()
{
    delete ui;
}

void GamePanel::keyPressEvent(QKeyEvent *ev)
{
    if(ev->key() == Qt::Key_Up)
        direction.push_back(1);
    if(ev->key() == Qt::Key_Down)
        direction.push_back(2);
    if(ev->key() == Qt::Key_Left)
        direction.push_back(3);
    if(ev->key() == Qt::Key_Right)
        direction.push_back(4);
    if(ev->key() == Qt::Key_F1)
    {
        difficulty++;
        difficultyChanged=true;
    }
    if(ev->key() == Qt::Key_F2)
        if (difficulty>1)
        {
            difficulty--;
            difficultyChanged=true;
        }
    if(ev->key() == Qt::Key_Space)
        paused=!paused;
    QWidget::keyPressEvent(ev);
}

void GamePanel::keyReleaseEvent(QKeyEvent *ev)
{

    QWidget::keyReleaseEvent(ev);
}
