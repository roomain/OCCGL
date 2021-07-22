#include "OCCGL.h"
#include <glad/glad.h>
#include <QSurfaceFormat>
#include <QOpenGLContext>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QSurfaceFormat fmt;
    fmt.setSamples(4);
    fmt.setSwapInterval(0);
    fmt.setRenderableType(QSurfaceFormat::OpenGL);
    fmt.setProfile(QSurfaceFormat::CoreProfile);
    fmt.setSwapBehavior(QSurfaceFormat::DoubleBuffer);
    QSurfaceFormat::setDefaultFormat(fmt);
    gladLoadGL();
    QApplication a(argc, argv);
    OCCGL w;
    w.show();
    return a.exec();
}
