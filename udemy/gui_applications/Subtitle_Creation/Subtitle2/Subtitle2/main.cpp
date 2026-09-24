#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // MainWindow w;
    // w.show();
    // return QApplication::exec();
    QWidget mainWindow;
    mainWindow.setWindowTitle("Subtitles Creation App");
    mainWindow.resize(400,300);


    QVBoxLayout *layout = new QVBoxLayout(&mainWindow);


    QLabel *titleLabel = new QLabel("Subtitle Creator App");
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 24px; color: blue");
    layout->addWidget(titleLabel);


    //app instruction label

    QLabel *instructionLabel = new QLabel("Please Select any Video to create Subtitles");
    instructionLabel->setAlignment(Qt::AlignCenter);
    instructionLabel->setStyleSheet("font-size: 20px; color: red");
    layout->addWidget(instructionLabel);


    //Select Button
    QPushButton *selectButton = new QPushButton("Select");
    selectButton->setStyleSheet("font-size:18px; color:white; background-color: gray");
    layout->addWidget(selectButton);

    mainWindow.show();
    app.exec();

    return QApplication::exec();
}
