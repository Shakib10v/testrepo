#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->pushButton->setText("hello world");
   //connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
   //connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));
   setCentralWidget(ui->plainTextEdit);

   //disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_window_triggered()
{
  dialog=new MyDialog(this);
// mDialog.setModal(false);
 //mDialog.exec();
 dialog->show();



}
