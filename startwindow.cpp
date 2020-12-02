/**Start Window UI designed by Obaida Kamil
 * This class is designed to provide the opening interface where the
 * user can view the project credits or start the toothbrush and move
 * into the selection window interface.
 **/


#include "startwindow.h"
#include "ui_startwindow.h"
#include "selectionwindow.h"
#include "creditswindow.h"
#include <QPixmap>

startWindow::startWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startWindow)
{
    ui->setupUi(this);

    QPixmap startWindowBackground("/home/pi/toothBrushGUI/startWindowPics/startWindowBackground.jpg");

    ui->startWindowPicture->setPixmap(startWindowBackground);
}

startWindow::~startWindow()
{
    delete ui;
}



void startWindow::on_startButton_clicked()
{
    hide();
    selectionWindow selectionWindow;
    selectionWindow.setModal(true);
    selectionWindow.exec();
}

void startWindow::on_creditsButton_clicked()
{
    creditsWindow creditsWindow;
    creditsWindow.setModal(true);
    creditsWindow.exec();
}
