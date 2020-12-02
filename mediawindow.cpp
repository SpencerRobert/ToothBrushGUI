/** Media Window UI designed by Yashkarn Pabla
 * This class is designed to allow the user to select between opening
 * the sports media interface or the news media interface
 **/

#include "mediawindow.h"
#include "ui_mediawindow.h"
#include "sportswindow.h"
#include "selectionwindow.h"
#include "newswindow.h"
#include <QPixmap>

mediaWindow::mediaWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mediaWindow)
{
    ui->setupUi(this);
    QPixmap defaultPic("/home/pi/toothBrushGUI/mediaPics/mediaDefaultrsz.jpg");
    ui->mediaPicture->setPixmap(defaultPic);    //Set background picture
}

mediaWindow::~mediaWindow()
{
    delete ui;
}

void mediaWindow::on_sportsButton_clicked()
{
    hide(); //Close media window
    //Open sports window
    sportsWindow sportsWindow;
    sportsWindow.setModal(true);
    sportsWindow.exec();
}

void mediaWindow::on_mediaBackButton_clicked()
{
    hide();
    selectionWindow selectionWindowBack;
    selectionWindowBack.setModal(true);
    selectionWindowBack.exec();
}

void mediaWindow::on_newsButton_clicked()
{
    hide(); //Close media window
    //Open news window
    newsWindow newsWindow;
    newsWindow.setModal(true);
    newsWindow.exec();
}
