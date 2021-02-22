/*

	1st Tile - The Abstract
	Name - Amanuel Negussie
	SRC - HS8103

*/

#include <GL/glut.h>
#include <Windows.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 500;

void display();
void reshape(int, int);
void timer(int);
void keyboard(unsigned char, int, int);

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0); //used to set a new flush color other than the default
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//the double uses two frame buffers, the front and the back

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);

	glutCreateWindow("1st Tile - The Abstract");

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
	//clearing before drawing(clearing the framebuffer)
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //resetting any metrics from the pre-used frame

	//draw here
	//Lines First
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-15, 16.0);
	glVertex2f(-15, -12.0);
	glVertex2f(-15 + 0.5, -12.0);
	glVertex2f(-15 + 0.5, 16.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-20.0, 16.0);
	glVertex2f(-20.0, 15.3);
	glVertex2f(-20.0 + 8.0, 15.3);
	glVertex2f(-20.0 + 8.0, 16.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-12.0, 20.0);
	glVertex2f(-12.0, 11.3);
	glVertex2f(-12.0 + 0.5, 11.3);
	glVertex2f(-12.0 + 0.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-12.0, 11.3);
	glVertex2f(-12.0, 10.5);
	glVertex2f(-12.0 + 8.0, 10.5);
	glVertex2f(-12.0 + 8.0, 11.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-4.0, 20.0);
	glVertex2f(-4.0, 7.3);
	glVertex2f(-4.0 + 0.5, 7.3);
	glVertex2f(-4.0 + 0.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-4.0, 7.3);
	glVertex2f(-4.0, 6.3);
	glVertex2f(-4.0 + 10.0, 6.3);
	glVertex2f(-4.0 + 10.0, 7.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(6.0, 20.0);
	glVertex2f(6.0, 6.3);
	glVertex2f(6.0 + 0.5, 6.3);
	glVertex2f(6.0 + 0.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(6.5, 10.5);
	glVertex2f(6.5, 9.6);
	glVertex2f(6.5 + 5.0, 9.6);
	glVertex2f(6.5 + 5.0, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(11.5, 10.5);
	glVertex2f(11.5, -14.3);
	glVertex2f(11.5 + 0.5, -14.3);
	glVertex2f(11.5 + 0.5, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(11.5, -13.3);
	glVertex2f(11.5, -14.3);
	glVertex2f(11.5 - 9.0, -14.3);
	glVertex2f(11.5 - 9.0, -13.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(2.5, 6.3);
	glVertex2f(2.5, -20.0);
	glVertex2f(2.5 + 0.6, -20.0);
	glVertex2f(2.5 + 0.6, 6.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-7.0, 10.5);
	glVertex2f(-7.0, -20.0);
	glVertex2f(-7.0 + 0.6, -20.0);
	glVertex2f(-7.0 + 0.6, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-7.0, -12.3);
	glVertex2f(-7.0, -11.3);
	glVertex2f(-7.0 - 8.0, -11.3);
	glVertex2f(-7.0 - 8.0, -12.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-12.0, -12.3);
	glVertex2f(-12.0, -20.0);
	glVertex2f(-12.0 - 0.6, -20.0);
	glVertex2f(-12.0 - 0.6, -12.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(8.0, -14.3);
	glVertex2f(8.0, -20.0);
	glVertex2f(8.0 - 0.6, -20.0);
	glVertex2f(8.0 - 0.6, -14.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(12.0, 5.3);
	glVertex2f(12.0, 4.3);
	glVertex2f(12.0 + 8.0, 4.3);
	glVertex2f(12.0 + 8.0, 5.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(12.0, -8.3);
	glVertex2f(12.0, -7.3);
	glVertex2f(12.0 + 8.0, -7.3);
	glVertex2f(12.0 + 8.0, -8.3);

	glEnd();

	//Colors Next
	glBegin(GL_POLYGON);

	glColor3f(0.40, 0.39, 0.36);
	glVertex2f(-20.0, 20.0);
	glVertex2f(-20.0, 16.0);
	glVertex2f(-20.0 + 8.0, 16.0);
	glVertex2f(-20.0 + 8.0, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(241, 238, 233);
	glVertex2f(-11.5, 20.0);
	glVertex2f(-11.5, 11.3);
	glVertex2f(-11.5 + 7.5, 11.3);
	glVertex2f(-11.5 + 7.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(67, 61, 56);
	glVertex2f(-3.5, 20.0);
	glVertex2f(-3.5, 7.3);
	glVertex2f(-3.5 + 9.5, 7.3);
	glVertex2f(-3.5 + 9.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(191, 179, 181);
	glVertex2f(6.5, 20.0);
	glVertex2f(6.5, 10.5);
	glVertex2f(6.5 + 13.5, 10.5);
	glVertex2f(6.5 + 13.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(191, 179, 181);
	glVertex2f(12.0, 10.5);
	glVertex2f(12.0, 5.3);
	glVertex2f(12.0 + 8.0, 5.3);
	glVertex2f(12.0 + 8.0, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.189, 0.179, 0.180);
	glVertex2f(12.0, -8.3);
	glVertex2f(12.0, -20.0);
	glVertex2f(12.0 + 8.0, -20.0);
	glVertex2f(12.0 + 8.0, -8.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3f(0.189, 0.179, 0.180);
	glVertex2f(12.5, -14.3);
	glVertex2f(12.5, -20.0);
	glVertex2f(12.5 - 9.5, -20.0);
	glVertex2f(12.5 - 9.5, -14.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(241, 238, 233);
	glVertex2f(3.1, 6.3);
	glVertex2f(3.1, -13.3);
	glVertex2f(3.1 + 8.4, -13.3);
	glVertex2f(3.1 + 8.4, 6.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(241, 238, 233);
	glVertex2f(6.5, 9.6);
	glVertex2f(6.5, 6.3);
	glVertex2f(6.5 + 5.0, 6.3);
	glVertex2f(6.5 + 5.0, 9.6);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(191, 179, 181);
	glVertex2f(-14.5, 10.5);
	glVertex2f(-14.5, -11.3);
	glVertex2f(-14.5 + 7.5, -11.3);
	glVertex2f(-14.5 + 7.5, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(191, 179, 181);
	glVertex2f(-14.5, 15.3);
	glVertex2f(-14.5, 10.5);
	glVertex2f(-14.5 + 2.5, 10.5);
	glVertex2f(-14.5 + 2.5, 15.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(226, 205, 174);
	glVertex2f(-20, 15.3);
	glVertex2f(-20, -20.0);
	glVertex2f(-20 + 5.0, -20.0);
	glVertex2f(-20 + 5.0, 15.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(226, 205, 174);
	glVertex2f(-15, -12.3);
	glVertex2f(-15, -20.0);
	glVertex2f(-15 + 2.4, -20.0);
	glVertex2f(-15 + 2.4, -12.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(241, 238, 233);
	glVertex2f(-12, -12.3);
	glVertex2f(-12, -20.0);
	glVertex2f(-12 + 5.0, -20.0);
	glVertex2f(-12 + 5.0, -12.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(6, 61, 56);
	glVertex2f(-6.4, 6.3);
	glVertex2f(-6.4, -20.0);
	glVertex2f(-6.4 + 8.9, -20.0);
	glVertex2f(-6.4 + 8.9, 6.3);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(6, 61, 56);
	glVertex2f(-6.4, 10.5);
	glVertex2f(-6.4, 6.3);
	glVertex2f(-6.4 + 2.4, 6.3);
	glVertex2f(-6.4 + 2.4, 10.5);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(6, 6, 56);
	glVertex2f(12.0, 4.4);
	glVertex2f(12.0, -7.3);
	glVertex2f(12.0 + 8.0, -7.3);
	glVertex2f(12.0 + 8.0, 4.4);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(58, 42, 43);
	glVertex2f(-20.0, 20.0);
	glVertex2f(-20.0, -20.0);
	glVertex2f(-20.0 + 0.5, -20.0);
	glVertex2f(-20.0 + 0.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(58, 42, 43);
	glVertex2f(19.5, 20.0);
	glVertex2f(19.5, -20.0);
	glVertex2f(19.5 + 0.5, -20.0);
	glVertex2f(19.5 + 0.5, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(58, 42, 43);
	glVertex2f(-20.0, 20.0);
	glVertex2f(-20.0, 19.3);
	glVertex2f(-20.0 + 40.0, 19.3);
	glVertex2f(-20.0 + 40.0, 20.0);

	glEnd();
	glBegin(GL_POLYGON);

	glColor3ub(58, 42, 43);
	glVertex2f(-20.0, -20.0);
	glVertex2f(-20.0, -19.3);
	glVertex2f(-20.0 + 40.0, -19.3);
	glVertex2f(-20.0 + 40.0, -20.0);

	glEnd();

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	//viewport: a rectangular clipping area where the shapes are shown.
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-20, 20, -20, 20);
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