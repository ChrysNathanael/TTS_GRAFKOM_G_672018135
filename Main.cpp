#include <iostream>
#include <GL/freeglut.h>


void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(0, 60); //kiri bawah
	glVertex2f(0, 0);//titik kiri atas
	glVertex2f(60, 60);//kanan bawah
	glVertex2f(60, 0);//kanan atas
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(250, 250);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(180, 250);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(250, 320);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(180, 320);
	glEnd();

	//kotak2
	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(110, 250);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(40, 250);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(0, 0, 0);
	glVertex2f(110, 320);
	glEnd();

	glPointSize(70);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex2f(40, 320);
	glEnd();
	glFlush();
	glutSwapBuffers();
}


void myinit() {
	glClearColor(1.0, 0.5, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 500, 00);// left,right,bottom,top
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}