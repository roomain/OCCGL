#include "GLDisplay.h"

GLDisplay::GLDisplay(QWidget *parent)
	: QOpenGLWidget(parent), m_vaoHandle{ 0 }
{
}

GLDisplay::~GLDisplay()
{
}

void GLDisplay::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glViewport(0, 0, width(), height());
	if (m_vaoHandle)
	{
		glBindVertexArray(m_vaoHandle);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glBindVertexArray(0);
	}
}