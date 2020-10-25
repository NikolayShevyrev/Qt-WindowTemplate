#include "comportdialog.h"
#include "ui_comportdialog.h"

ComPortDialog::ComPortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComPortDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(),this->geometry().height());


}

ComPortDialog::~ComPortDialog()
{
    delete ui;
}

comPortSettings ComPortDialog::getSettings() const
{
    return settings;
}
