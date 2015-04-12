/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
// A Simple OpenGL Project
// Author: Michael Hall
//
// This C++ code and project are provided "as is"
// without warranty of any kind. For personal use only,
// not for distribution. Copyright 2010 XoaX.
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	//glTranslatef(0.5F,0.5F,0);
	//glRotatef(60.0, 0.0, 1.0, 0.0);
   // glutPostRedisplay();


	glBegin(GL_TRIANGLES);//start drawing triangles
      glVertex3f(0.15f,0.0f,0.0f);//triangle one first vertex
      glVertex3f(0.22f,0.25f,0.0f);//triangle one second vertex
      glVertex3f(0.30f,0.0f,0.0f);//triangle one third vertex
      //drawing a new triangle
      glVertex3f(0.5f,0.0f,0.0f);//triangle two first vertex
      glVertex3f(1.0f,0.0f,0.0f);//triangle two second vertex
      glVertex3f(0.75f,1.0f,0.0f);//triangle two third vertex
    glEnd();//end drawing of triangles
	glFlush();
}

void Initialize() {
	glClearColor(0.0, 1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 500);
	//glutInitWindowPosition(0  , 0);
	glutCreateWindow("Daniar Heri");
	Initialize();

	glutDisplayFunc(Draw);

	glutMainLoop();
	return 0;
}
