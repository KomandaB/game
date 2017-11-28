#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QWidget>
#include <QTextBrowser>
#include "settings.h"

namespace Ui {
class DialogWindow;
}
class DialogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DialogWindow(QWidget *parent = 0);
    ~DialogWindow();
private:
    Ui::DialogWindow *ui;
private slots:
   void goToMenuSlot();
   void goToMapSlot();
   void on_var1_clicked();


signals:
   void stateChanged(GraphicStates newState,int id);
};

#endif // DIALOGWINDOW_H
