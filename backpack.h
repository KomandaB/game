#ifndef BACKPACK_H
#define BACKPACK_H

#include <QMainWindow>
#include <QDebug>
#include <QtWidgets>
#include <QWidget>
#include "settings.h"
#include "gameentites.h"
#include "gamehandler.h"
#include "goodcharacter.h"
#include "faitwindow.h"


namespace Ui {
class BackPack;
}

class BackPack : public QWidget
{
    Q_OBJECT

public:
    explicit BackPack(QWidget *parent = 0, GameEntites *entites=0, int ID=0);
    ~BackPack();
    void ChangeBackpack();

private:
    Ui::BackPack *ui;
    GameEntites *entetis;
    int CurrentStation;
signals:
    void stateChanged(GraphicStates newState,int ID);
private slots:
    void GoToFaitCliked(int ID);
    void DressingUp(int id);

};

#endif // BACKPACK_H
