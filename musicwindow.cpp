/**Music Window UI designed by Obaida Kamil
 * This class is designed to allow the user to search up music
 * (or any other media) through the Youtube or Soundcloud platform
 * */

#include "musicwindow.h"
#include "ui_musicwindow.h"
#include "selectionwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QPixmap>

musicWindow::musicWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::musicWindow)
{
    ui->setupUi(this);

    QPixmap musicPic("/home/pi/toothBrushGUI/musicPics/musicBackgroundrsz.jpg");

    ui->musicPicture->setPixmap(musicPic);  //Set background
}

musicWindow::~musicWindow()
{
    delete ui;
}

void musicWindow::on_soundcloudSearchButton_clicked()
{
    //Search soundcloud based on search bar input
    QString soundcloudLink = "https://soundcloud.com/search?q=" + ui->musicSearchBar->displayText();
    QDesktopServices::openUrl(QUrl(soundcloudLink));
}

void musicWindow::on_searchYoutubeButton_clicked()
{
    //Search youtube based on search bar input
    QString youtubeLink = "https://www.youtube.com/results?search_query=" + ui->musicSearchBar->displayText();
    QDesktopServices::openUrl(QUrl(youtubeLink));
}

void musicWindow::on_musicBackButton_clicked()
{
    //Close current window and open previous
    hide();
    selectionWindow selectionWindowBack;
    selectionWindowBack.setModal(true);
    selectionWindowBack.exec();
}
