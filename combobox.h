#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QDialog>

namespace Ui {
class ComboBox;
}

class ComboBox : public QDialog
{
    Q_OBJECT

public:
    explicit ComboBox(QWidget *parent = nullptr);
    ~ComboBox();

private:
    Ui::ComboBox *ui;
};

#endif // COMBOBOX_H
