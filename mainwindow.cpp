#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->buttonHello, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    //
    //connect(ui->pushButton_C,SIGNAL(clicked()), ui->label_Intermediate, SLOT(clear()));
    //my_timer.start(200);
    //connect(&this->my_timer, SIGNAL(timeout()),ui->spinBox, SLOT(stepUp()));
    //
    //this->my_button.setText("My button");
    //ui->verticalLayout->addWidget(&this->my_button);
    //
    //connect(&this->my_button, SIGNAL(clicked()), this, SLOT(onButtonAdd()));
    connect(ui->pushButton_C, SIGNAL(clicked()), ui->label_Intermediate, SLOT(clear()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(onButton_1_Clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButton_2_Clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
