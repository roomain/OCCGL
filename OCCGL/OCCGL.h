#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OCCGL.h"

class OCCGL : public QMainWindow
{
    Q_OBJECT

public:
    OCCGL(QWidget *parent = Q_NULLPTR);

private:
    Ui::OCCGLClass ui;
};
