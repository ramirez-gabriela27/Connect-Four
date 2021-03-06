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

    void update_curr_player_color();
    void updateChipDisplay(Chip* c);

    void next_turn();
    void populateBoard();

    bool on_p1_name_editingFinished();

    bool on_p2_name_editingFinished();

    bool on_p3_name_editingFinished();

    bool on_p1_color_editingFinished();

    bool on_p2_color_editingFinished();

    bool on_p3_color_editingFinished();

signals:

    void send_rounds(int rounds_);

    void update_p1_name(QString name);
    void update_p2_name(QString name);
    void update_p3_name(QString name);

    void update_p1_points(int pts);
    void update_p2_points(int pts);
    void update_p3_points(int pts);


    void clear_leaderboard();
    void buy_signal();

    void chip_dropped(int col);

private slots:

    void on_doneButton_clicked();

    void on_p1_color_clicked();

    void on_p2_color_clicked();

    void on_p3_color_clicked();
    
    void on_p1_comboBox_currentIndexChanged(int index);

    void on_p2_comboBox_currentIndexChanged(int index);

    void on_p3_comboBox_currentIndexChanged(int index);

    void on_board_shopButton_clicked();

    void on_store_nextRoundButton_clicked();

    void on_actionLeaderboard_triggered();

    void on_actionEnd_Game_triggered();

    int recieve_buy_signal();

    int recieve_dropped(int col);

    void on_column_1_clicked();

    void on_column_2_clicked();

    void on_column_3_clicked();

    void on_column_4_clicked();

    void on_column_5_clicked();

    void on_column_6_clicked();

    void on_column_7_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

public slots:
    void recieve_clear_signal();

    void on_buy_upgrade_clicked();

    void on_buy_item_clicked();

private:
    int rounds_;
    int round_tracker_;
    Ui::MainBoard *ui;
    Board* board_ = nullptr;
    statsDisplay* sd_ = nullptr;
    bool show_ = false;
    QGraphicsScene *scene;
    int turn_number_;

};
#endif // MAINBOARD_H
