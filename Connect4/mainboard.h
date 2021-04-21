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
    Board* getBoardRef() {return board_;};

private slots:

    void on_doneButton_clicked();

    void on_p1_color_clicked();

    void on_p2_color_clicked();

    void on_p3_color_clicked();
    
    void on_p1_comboBox_currentIndexChanged(int index);

    void on_p2_comboBox_currentIndexChanged(int index);

    void on_p3_comboBox_currentIndexChanged(int index);

    bool on_p1_name_editingFinished();

    bool on_p2_name_editingFinished();

    bool on_p3_name_editingFinished();

    void on_board_endGameButton_clicked();

    void on_board_shopButton_clicked();

    void on_store_endGameButton_clicked();

    void on_store_nextRoundButton_clicked();

    void on_actionStats_triggered();

private:
    Ui::MainBoard *ui;
    Board* board_ = nullptr;
};
#endif // MAINBOARD_H
