#ifndef ENTRY_H
#define ENTRY_H

#include <QWidget>

namespace Ui {
class Entry;
}

class Entry : public QWidget
{
    Q_OBJECT
    
public:
    explicit Entry(QWidget *parent = 0);

    ~Entry();
    
private:
    Ui::Entry *ui;
};

#endif // ENTRY_H
