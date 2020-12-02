/**Selection Window UI designed by Yashkarn Pabla
 * This class is designed to allow the user to select between opening
 * the music or media interface, or the weather widget. It is also
 * designed to display a calendar opened to the current month, along
 * with the current time and date displayed underneath.
 **/

#include "selectionwindow.h"
#include "ui_selectionwindow.h"
#include "musicwindow.h"
#include "mediawindow.h"
#include "startwindow.h"
#include "widget.h"
#include <QTimer>
#include <QTime>


selectionWindow::selectionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectionWindow)
{
    ui->setupUi(this);

    QString currentDate = QDate::currentDate().toString("dddd MMMM d yyyy");    //Get current date in long format
    ui->currentDateLabel->setText(currentDate);

    ui->currentTimeLabel->setStyleSheet("font: 18pt;");

    timer_1m = new QTimer(this);    //Timer to update current time every 100 milisec
    QObject::connect(timer_1m, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer_1m->start(100);
}


selectionWindow::~selectionWindow()
{
    delete ui;
}



void selectionWindow::on_musicButton_clicked()
{
    hide();
    musicWindow musicWindow;
    musicWindow.setModal(true);
    musicWindow.exec();
}

void selectionWindow::on_mediaButton_clicked()
{
    hide();
    mediaWindow mediaWindow;
    mediaWindow.setModal(true);
    mediaWindow.exec();
}



void selectionWindow::on_weatherButton_clicked()
{
    Widget *weatherWindow = new Widget();
     weatherWindow->show();
}

void selectionWindow::updateTime() {
    ui->currentTimeLabel->setText(QTime::currentTime().toString("hh:mm A"));    //Print updated time
}
