#pragma once

#include <glad/glad.h>
#include <QOpenGLWidget>

class GLDisplay : public QOpenGLWidget
{
	Q_OBJECT

public:
	GLDisplay(QWidget* parent = nullptr);
	~GLDisplay();
protected:
	void paintGL() final;

private:
	GLint m_vaoHandle;
};
