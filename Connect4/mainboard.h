#ifndef MAINBOARD_H
#define MAINBOARD_H
#include "game.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainBoard; }
QT_END_NAMESPACE

class MainBoard : public QMainWindow
{
    Q_OBJECT

public:
    MainBoard(QWidget *parent = nullptr);
    ~MainBoard();

    void setBoard(Board* board) {board_ = board;};
    Board* getBoard() {return board_;};

private slots:

    void on_doneButton_clicked();

    void on_p1_color_clicked();

    void on_p2_color_clicked();

    void on_p3_color_clicked();


private:
    Ui::MainBoard *ui;
    Board* board_;
};
#endif // MAINBOARD_H
