#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>
#include <memory>
#include "ui_mainwindow.h"
//#include <iostream>
#include <QDebug>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer my_timer;

    QPushButton my_button;
    std::vector<std::shared_ptr<QPushButton>> my_buttons;
    std::vector<QString> memory;
public slots:

    void onButton_1_Clicked()
    {
        qDebug() << "onButton_1_Clicked";
        ui->label_Intermediate->setText("1");
        memory.push_back(1);
    }

    void onButton_2_Clicked()
    {
        qDebug() << "onButton_2_Clicked";
        ui->label_Intermediate->setText("2");
    }

   // void onButtonAdd()
   // {
   //     std::shared_ptr<QPushButton> new_button(new QPushButton());
   //     my_buttons.emplace_back(new_button);
   //     connect(new_button.get(), SIGNAL(clicked()),this,SLOT(onButtonAdd()));
   //     new_button->setText(ui->spinBox->text());
   //
   //     ui->verticalLayout->addWidget(new_button.get());
   //     //ui->verticalLayout->addWidget(&this->my_buttons);
   // }
};

#endif // MAINWINDOW_HPP
