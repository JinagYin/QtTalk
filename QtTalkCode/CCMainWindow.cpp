#include "CCMainWindow.h"
#include "ui_CCMainWindow.h"

CCMainWindow::CCMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CCMainWindow)
{
    ui->setupUi(this);
}

CCMainWindow::~CCMainWindow()
{
    delete ui;
}

