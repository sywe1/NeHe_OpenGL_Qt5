#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QOpenGLShaderProgram>
#include "openglwindow.h"

class PolygonWindow : public OpenGLWindow
{
    Q_OBJECT
public:
    explicit PolygonWindow(QWindow *parent = 0);
    ~PolygonWindow();
protected:
    void initialize();
    void render();
    void renderSquare();
private:
    void initGeometry();
private:
    QOpenGLShaderProgram *m_program;
    bool switch_;
    GLuint m_posAttr;

    GLuint m_vboIds[2];
};

#endif // POLYGONWINDOW_H
