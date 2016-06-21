#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->buttonHello, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    //
    //connect(ui->buttonClear,SIGNAL(clicked()), ui->label2, SLOT(clear()));
    //my_timer.start(200);
    //connect(&this->my_timer, SIGNAL(timeout()),ui->spinBox, SLOT(stepUp()));
    //
    //this->my_button.setText("My button");
    //ui->verticalLayout->addWidget(&this->my_button);
    //
    //connect(&this->my_button, SIGNAL(clicked()), this, SLOT(onButtonAdd()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
