/*

	3rd Tile - The Selen
	Name - Amanel negussie
	SRC - HS8103

*/

#include <GL/glut.h>
#include <Windows.h>
#include <stdio.h>
#include <iostream>

#define KEY_ESC 27

using namespace std;

const int SCREEN_WIDTH = 1160;
const int SCREEN_HEIGHT = 670;

void display();
void reshape(int, int);
void timer(int);
void keyboard(unsigned char key, int x, int y);

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);//used to set a new flush color other than the default
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//the double uses two frame buffers, the front and the back

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);

	glutCreateWindow("3rd Tile - The Selen");

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutTimerFunc(1000, timer, 0);
	init();

	glutMainLoop();
}

//Display Callback
void display()
{
	float var = 0, dec = 0;
	//clearing before drawing(clearing the framebuffer)
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity(); //resetting any metrics from the pre-used frame

	//draw here
	//Lines First
	while (dec < 100) {
		for (float i = 0; i < 100; i += 29.3) {
			for (int j = 0; j < 7; j++) {
				glBegin(GL_QUADS);
				glColor3ub(254, 103, 134);
				glVertex2f(-50 + var + i, 50 - dec);
				glColor3ub(254, 103, 134);
				glVertex2f(-50 + var + i, 34 - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-48 + var + i, 34 - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-48 + var + i, 50 - dec);
				glEnd();

				var -= 2.5;
			}
			var = 0;
			for (int k = 0; k < 7; k++) {
				glBegin(GL_QUADS);
				glColor3ub(85, 204, 212);
				glVertex2f(-35.4 + i, 50 - var - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-35.4 + i, 48 - var - dec);
				glColor3ub(85, 204, 212);
				glVertex2f(-20.7 + i, 48 - var - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-20.7 + i, 50 - var - dec);
				glEnd();

				var += 2.3;
			}
			var = 0;
		}

		for (float i = 0; i < 100; i += 29.8) {
			for (int j = 0; j < 7; j++) {
				glBegin(GL_QUADS);
				glColor3ub(85, 204, 212);
				glVertex2f(-50 + i, 33.9 - var - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-50 + i, 31.8 - var - dec);
				glColor3ub(85, 204, 212);
				glVertex2f(-35.4 + i, 31.8 - var - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-35.4 + i, 33.9 - var - dec);
				glEnd();

				var += 2.3;
			}
			var = 0;
			for (int k = 0; k < 7; k++) {
				glBegin(GL_QUADS);
				glColor3ub(254, 103, 134);
				glVertex2f(-35.3 + var + i, 33.9 - dec);
				glColor3ub(254, 103, 134);
				glVertex2f(-35.3 + var + i, 18 - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-33.1 + var + i, 18 - dec);
				glColor3ub(0, 0, 0);
				glVertex2f(-33.1 + var + i, 33.9 - dec);
				glEnd();

				var -= 2.5;
			}
			var = 0;
		}

		dec += 32;
	}

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-50, 50);
	glVertex2f(-50, 46);
	glVertex2f(50, 46);
	glVertex2f(50, 50);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-50, -46);
	glVertex2f(-50, -50);
	glVertex2f(50, -50);
	glVertex2f(50, -46);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-50, 50);
	glVertex2f(-50, -50);
	glVertex2f(-48, -50);
	glVertex2f(-48, 50);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(48, 50);
	glVertex2f(48, -50);
	glVertex2f(50, -50);
	glVertex2f(50, 50);
	glEnd();

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	//viewport: a rectangular clipping area where the shapes are shown.
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50, 50, -50, 50);
	glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
	glutPostRedisplay(); // calling the display func every 1000/60th of a sec.
	glutTimerFunc(1000 / 60, timer, 0);
}

void keyboard(unsigned char key, int x, int y)
{
	if (key == 27) {
		exit(1);
	}
}