#ifndef MAINBOARD_H
#define MAINBOARD_H

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

private slots:
    void on_pushButton_clicked();

    void on_p1_color_clicked();

    void on_p2_color_clicked();

    void on_p3_color_clicked();

    void on_doneButton_clicked();

private:
    Ui::MainBoard *ui;
};
#endif // MAINBOARD_H
