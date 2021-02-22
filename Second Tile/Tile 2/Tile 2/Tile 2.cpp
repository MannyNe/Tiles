/*

	2nd Tile - The Triangles
	Name - Amanuel Negussie
	SRC - HS8103

*/

#include <GL/glut.h>
#include <Windows.h>

const int SCREEN_WIDTH = 1160;
const int SCREEN_HEIGHT = 670;

void display();
void reshape(int, int);
void timer(int);
void keyboard(unsigned char, int, int);

void init()
{
	glClearColor(0.238, 0.200, 0.264, 1.0); //used to set a new flush color other than the default
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//the double uses two frame buffers, the front and the back

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);

	glutCreateWindow("2nd Tile - The Triangles");

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
	float y1 = 30, y2 = 24.5, y3a = 24.5, y3b = 30;
	float y1ins = 28.5, y2ins = 25.5, y3ains = 25.5, y3bins = 30;
	float y1ins2 = 29, y2ins2 = 26, y3ains2 = 29, y3bins2 = 30;
	float y11 = 25.5, y22 = 20, y33a = 25.5, y33b = 20;
	float y11ins = 24.5, y22ins = 21.5, y33ains = 24.5, y33bins = 24.5;
	float y11ins2 = 24, y22ins2 = 21, y33ains2 = 21, y33bins2 = 24.5;

	float decA1 = 0, decB1 = 0, decC1 = 0;
	float decA2 = 1.5, decB2 = 1.5, decC2 = 1.5;

	//clearing before drawing(clearing the framebuffer)
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);
	glLoadIdentity(); //resetting any metrics from the pre-used frame


	//draw here
	//Lines First
	bool check = 0, rg = 0, rg1 = 0;//rg is for color pattern
	int y = 30, x = -1;//y is checking the ver. distance, x is spacing


	while (y >= -30) {
		if (check == 0) {
			for (int i = 0; i < 65; i += 5) {//upward triangle
				if (rg == 1) {
					glBegin(GL_TRIANGLES);
					glColor3ub(0.0, 0.0, 0.0);
					glVertex2f(-30 + i, y1 - decA1);
					glVertex2f(-32 + i, y2 - decB1);
					glVertex2f(-27 + i + x, y3a - decC1);
					glEnd();

					glBegin(GL_TRIANGLES);
					glColor3ub(254, 103, 134);//inner
					glVertex2f(-30 + i, y1ins - decA1);
					glVertex2f(-31 + i, y2ins - decB1);
					glVertex2f(-28 + i + x, y3ains - decC1);
					glEnd();
				}
				else {
					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 0.0, 0.0);
					glVertex2f(-30 + i, y1 - decA1);
					glVertex2f(-32 + i, y2 - decB1);
					glVertex2f(-27 + i + x, y3a - decC1);
					glEnd();
				}
			}

			if (rg == 1)
				rg = 0;
			else
				rg = 1;

			for (int i = 0; i < 65; i += 5) {//downward triange
				if (i % 2 != 0) {
					for (int j = i; j <= i + 5; j += 5) {
						glBegin(GL_TRIANGLES);
						glColor3f(0.0, 0.0, 0.0);
						glVertex2f(-29.5 + i, y1 - decA1);
						glVertex2f(-27.5 + i, y2 - decB1);
						glVertex2f(-24.5 + i + x, y3b - decC1);
						glEnd();

						glBegin(GL_TRIANGLES);
						glColor3ub(207, 208, 209);
						glVertex2f(-28.5 + i, y1ins2 - decA1);
						glColor3ub(210, 211, 212);
						glVertex2f(-27.5 + i, y2ins2 - decB1);
						glColor3ub(213, 214, 215);
						glVertex2f(-25.5 + i + x, y3ains2 - decC1);
						glEnd();
					}
				}
				else {
					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 0.0, 0.0);
					glVertex2f(-29.5 + i, y1 - decA1);
					glVertex2f(-27.5 + i, y2 - decB1);
					glVertex2f(-24.5 + i + x, y3b - decC1);
					glEnd();
				}
			}
			check = 1;
			decA1 += 12;
			decB1 += 12;
			decC1 += 12;
		}
		else if (check == 1) {
			for (int i = 0; i < 65; i += 5) {
				if (rg1 == 1) {
					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 0.0, 0.0);
					glVertex2f(-32 + i, y11 - decA2);
					glVertex2f(-30 + i, y22 - decB2);
					glVertex2f(-27 + i + x, y33a - decC2);
					glEnd();

					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 1.0, 1.0);
					glVertex2f(-31 + i, y11ins - decA2);
					glVertex2f(-30 + i, y22ins - decB2);
					glVertex2f(-28 + i + x, y33bins - decC2);
					glEnd();
				}
				else {
					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 0.0, 0.0);
					glVertex2f(-32 + i, y11 - decA2);
					glVertex2f(-30 + i, y22 - decB2);
					glVertex2f(-27 + i + x, y33a - decC2);
					glEnd();
				}
			}

			if (rg1 == 1)
				rg1 = 0;
			else
				rg1 = 1;

			for (int i = 0; i < 65; i += 5) {
				if (i % 2 != 0) {
					for (int j = i; j <= i + 5; j += 5) {
						glBegin(GL_TRIANGLES);
						glColor3f(0.0, 0.0, 0.0);
						glVertex2f(-27.5 + i, y11 - decA2);
						glVertex2f(-29.5 + i, y22 - decB2);
						glVertex2f(-24.5 + i + x, y33b - decC2);
						glEnd();

						glBegin(GL_TRIANGLES);
						glColor3f(0.0, 1.0, 1.0);
						glVertex2f(-27.5 + i, y11ins2 - decA2);
						glVertex2f(-28.5 + i, y22ins2 - decB2);
						glVertex2f(-25.5 + i + x, y33ains2 - decC2);
						glEnd();
					}
				}
				else {
					glBegin(GL_TRIANGLES);
					glColor3f(0.0, 0.0, 0.0);
					glVertex2f(-27.5 + i, y11 - decA2);
					glVertex2f(-29.5 + i, y22 - decB2);
					glVertex2f(-24.5 + i + x, y33b - decC2);
					glEnd();
				}
			}
			check = 0;
			decA2 += 12;
			decB2 += 12;
			decC2 += 12;
		}
		y -= 5;
	}

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	//viewport: a rectangular clipping area where the shapes are shown.
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-30, 30, -30, 30);
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