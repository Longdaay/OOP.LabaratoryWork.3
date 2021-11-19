#include "inputcoefform.h"
#include "ui_inputcoefform.h"

InputCoefForm::InputCoefForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputCoefForm)
{
    ui->setupUi(this);
}

InputCoefForm::~InputCoefForm()
{
    delete ui;
}

void InputCoefForm::on_buttonBox_accepted()
{
    this->close();


}


void InputCoefForm::on_A_real_LineEdit_textChanged(const QString &arg1)
{
    a.setReal((arg1.toDouble()));
    QLabel* resultLabel = this->window()->findChild<QLabel*>("resultText");
    resultLabel->setText(arg1);
}

