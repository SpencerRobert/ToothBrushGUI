/**Credits Window class UI designed by Mazen Baioumy
 * This class was designed to display the names of group members who
 * contributed to this project.
 **/

#include "creditswindow.h"
#include "ui_creditswindow.h"

creditsWindow::creditsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditsWindow)
{
    ui->setupUi(this);
}

creditsWindow::~creditsWindow()
{
    delete ui;
}
