#ifndef MAINBOARD_H
#define MAINBOARD_H
#include "game.h"
#include "statsdisplay.h"
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

    void setStatsDisplayPtr(statsDisplay* sd) {sd_ = sd;};
    statsDisplay* getStatsDisplayPtr() {return sd_;};

    void setStatsDisplayShow(bool s) {show_ = s;};
    bool getStatsDisplayShow() {return show_;};
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

    void on_LeaderboardButton_clicked();

public slots:
    void recieve_clear_signal();

private:
    Ui::MainBoard *ui;
    Board* board_ = nullptr;
    statsDisplay* sd_ = nullptr;
    bool show_ = false;
};
#endif // MAINBOARD_H
