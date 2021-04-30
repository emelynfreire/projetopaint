#include "arquivosalvodialog.h"
#include "ui_arquivosalvodialog.h"

ArquivoSalvoDialog::ArquivoSalvoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ArquivoSalvoDialog)
{
    ui->setupUi(this);
}

ArquivoSalvoDialog::~ArquivoSalvoDialog()
{
    delete ui;
}
