#include "tinterface.h"
#include "./ui_tinterface.h"
#include <QPushButton>

TInterface::TInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TInterface)
{
    ui->setupUi(this);
}

TInterface::~TInterface()
{
    delete ui;
}

void TInterface::on_ExitButton_clicked()
{
    this->close();
}


void TInterface::on_SetPolinomCoefsButton_clicked()
{
   input_form = new InputCoefForm;
   this->setEnabled(false);
   input_form->activateWindow();
   //input_form->setParent(this);
   input_form->show();
}

