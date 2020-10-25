#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "comportdialog.h"
#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionConnect_triggered();

private:
    Ui::MainWindow *ui;

    QSerialPort* serialPort;
    ComPortDialog* comPortSetUp;
};
#endif // MAINWINDOW_H
