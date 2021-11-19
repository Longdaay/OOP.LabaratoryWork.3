#ifndef INPUTCOEFFORM_H
#define INPUTCOEFFORM_H

#include <QWidget>
#include "tpolinom.h"
#include <vector>
#include <QMainWindow>

namespace Ui {
class InputCoefForm;
}

class InputCoefForm : public QWidget
{
    Q_OBJECT

public:
    explicit InputCoefForm(QWidget *parent = nullptr);
    ~InputCoefForm();

private slots:

    void on_buttonBox_accepted();

    void on_A_real_LineEdit_textChanged(const QString &arg1);

private:
    Ui::InputCoefForm *ui;
    number a, b, c;
};

#endif // INPUTCOEFFORM_H
