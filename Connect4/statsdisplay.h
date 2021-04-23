#ifndef STATSDISPLAY_H
#define STATSDISPLAY_H

#include <QDialog>

namespace Ui {
class statsDisplay;
}

class statsDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit statsDisplay(QWidget *parent = nullptr);
    ~statsDisplay();

private:
    Ui::statsDisplay *ui;
};

#endif // STATSDISPLAY_H
