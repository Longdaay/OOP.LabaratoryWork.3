#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QMainWindow>
#include "inputcoefform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TInterface; }
QT_END_NAMESPACE

class TInterface : public QMainWindow
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();

private slots:
    void on_ExitButton_clicked();

    void on_SetPolinomCoefsButton_clicked();

private:
    Ui::TInterface *ui;
    InputCoefForm* input_form = nullptr;


};
#endif // TINTERFACE_H
