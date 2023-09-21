#include <iostream>
#include <GL/glut.h>

void display(){

	glClear(GL_COLOR_BUFFER_BIT);		
	
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(-0.30f, 0);
		glColor3ub(170,186,202);
		glVertex2f(-0.15f, -0.30f);
		glColor3ub(193,205,219);
		glVertex2f(0.15f, -0.30f);
		glColor3ub(221,231,238);
		
		glVertex2f(-0.30f, 0);
		glColor3ub(228,246, 223);
		glVertex2f(0.15f, -0.30f);
		glColor3ub(249,229,234);
		glVertex2f(0.30f, 0);
		glColor3ub(255,220,228);
		
		glVertex2f(-0.30f, 0);
		glColor3ub(220,244,252);
		glVertex2f(0.30f, 0);
		glColor3ub(233,247,253);
		glVertex2f(0.15f, 0.30f);
		glColor3ub(220,244,200);
		
		glVertex2f(-0.30f, 0);
		glColor3ub(49,77,135);
		glVertex2f(0.15f, 0.30f);
		glColor3ub(121,161,195);
		glVertex2f(-0.15f, 0.30f);
		glColor3ub(150,186,212);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	
	glutInit(&argc,argv);
	glutInitWindowSize(1024,768);
	glutInitWindowPosition(200,50);
	
	glutCreateWindow("My First OpenGL");
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}


