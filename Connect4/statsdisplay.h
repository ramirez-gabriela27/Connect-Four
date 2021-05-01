#ifndef STATSDISPLAY_H
#define STATSDISPLAY_H

#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class statsDisplay;
}

class statsDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit statsDisplay(QWidget *parent = nullptr);
    ~statsDisplay();
    void closeEvent(QCloseEvent *) override;

signals:
    void clear_show_signal();

public slots:

    void recieve_p1_name(QString name);

    void recieve_p2_name(QString name);

    void recieve_p3_name(QString name);

    void get_rounds(int rounds);

    void clear_leaderboard();

private slots:

    void on_statsDisplay_destroyed();

private:
    Ui::statsDisplay *ui;
};

#endif // STATSDISPLAY_H
