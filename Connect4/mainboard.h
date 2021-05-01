#ifndef MAINBOARD_H
#define MAINBOARD_H
#include "game.h"
#include "statsdisplay.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>


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

    void playGame();

signals:

    void send_rounds(int rounds_);

    void send_p1_name(QString name);
    void send_p2_name(QString name);
    void send_p3_name(QString name);

    void clear_leaderboard();

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

    bool on_p1_color_editingFinished();

    bool on_p2_color_editingFinished();

    bool on_p3_color_editingFinished();

    void on_board_shopButton_clicked();

    void on_store_nextRoundButton_clicked();

    void on_actionLeaderboard_triggered();

    void on_actionEnd_Game_triggered();

    void on_column_1_pressed();

    void on_column_1_released();

    void on_column_2_pressed();

    void on_column_2_released();

    void on_column_3_pressed();

    void on_column_4_pressed();

    void on_column_4_released();

    void on_column_5_pressed();

    void on_column_5_released();

    void on_column_6_released();

    void on_column_6_pressed();

    void on_column_7_pressed();

    void on_column_7_released();

    void on_column_3_released();

public slots:
    void recieve_clear_signal();

    void on_buy_upgrade_clicked();

    void on_buy_item_clicked();

private:
    int rounds_;
    Ui::MainBoard *ui;
    Board* board_ = nullptr;
    statsDisplay* sd_ = nullptr;
    bool show_ = false;
    QGraphicsScene *scene;

};
#endif // MAINBOARD_H
