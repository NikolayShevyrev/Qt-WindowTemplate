#ifndef COMPORTDIALOG_H
#define COMPORTDIALOG_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class ComPortDialog;
}

struct comPortSettings {
    QString portName;
    qint32 baudRate;
    QString stringBaudRate;
    QSerialPort::DataBits dataBits;
    QString stringDataBits;
    QSerialPort::Parity parity;
    QString stringParity;
    QSerialPort::StopBits stopBits;
    QString stringStopBits;
    QSerialPort::FlowControl flowControl;
    QString stringFlowControl;
};

class ComPortDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ComPortDialog(QWidget *parent = nullptr);
    ~ComPortDialog();

    comPortSettings settings;

    comPortSettings getSettings() const;

private:
    Ui::ComPortDialog *ui;
};

#endif // COMPORTDIALOG_H
