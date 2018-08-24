#include <QApplication>
#include <QSurfaceFormat>
#include "polygonwindow.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    PolygonWindow window;
    window.setFormat(format);
    window.resize(640, 480);
    window.show();
    window.setAnimating(false);
    return app.exec();
}
