#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mydialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_window_triggered();

 private:
    Ui::MainWindow *ui;
    MyDialog *dialog;
};

#endif // MAINWINDOW_H
