#ifndef ARQUIVOSALVODIALOG_H
#define ARQUIVOSALVODIALOG_H

#include <QDialog>

namespace Ui {
class ArquivoSalvoDialog;
}

class ArquivoSalvoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ArquivoSalvoDialog(QWidget *parent = nullptr);
    ~ArquivoSalvoDialog();

private:
    Ui::ArquivoSalvoDialog *ui;
};

#endif // ARQUIVOSALVODIALOG_H
