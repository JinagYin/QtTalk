#ifndef CCMAINWINDOW_H
#define CCMAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CCMainWindow; }
QT_END_NAMESPACE

class CCMainWindow : public QWidget
{
    Q_OBJECT

public:
    CCMainWindow(QWidget *parent = nullptr);
    ~CCMainWindow();

private:
    Ui::CCMainWindow *ui;
};
#endif // CCMAINWINDOW_H
