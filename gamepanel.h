#ifndef GAMEPANEL_H
#define GAMEPANEL_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include"dialog3.h"


namespace Ui {
class GamePanel;
}

class GamePanel : public QMainWindow
{
    Q_OBJECT
   // int difficulty;
public:
    //修改构造函数以便确认游戏模式
    explicit GamePanel(int mode,QWidget *parent = 0);
    ~GamePanel();
public:
    int mode;//模式
    int board[20][20];//单人面板
    int ai_board[20][20];//人机面板

protected:
    virtual void keyPressEvent(QKeyEvent *ev);//键盘事件(按下)
    virtual void keyReleaseEvent(QKeyEvent *ev);//键盘事件(释放)

private slots:
    /*
     * 让蛇动起来，此处为与timer同步进行,需定义为槽函数
    */
    void snake_move();
private:
    Ui::GamePanel *ui;
    //绘图函数
    void paintEvent(QPaintEvent*);
    //绘图指针
    QPainter *painter;
    //ai蛇移动函数
    void ai_snake_move();
    //单人,人机生成食物
    std::pair<int,int> generateFood();
    std::pair<int,int> ai_generateFood();
    //判断游戏结束
    void endGame();
    bool ai_move_judge(int ,int);
    int change_aiDirection();
    Dialog3 *dialog3;
    QTimer *timer;
};

#endif // GAMEPANEL_H


