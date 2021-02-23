/*

	4th Tile - The 3D
	Name - Amanuel negussie
	SRC - HS8103

*/

#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
#define KEY_ESC 27

using namespace std;

int fullscreen = 0;
int mouseDown = 0;

float x_rotate = 100.0f;
float y_rotate = -100.0f;

float x_difference = 100.0f;
float y_difference = 100.0f;

float translate_x = 0.0f;
float translate_y = 0.0f;
float translate_z = 0.0f;


float grow_shrink = 70.0f;
float resize_f = 1.0f;

void drawBox();
int init(void);
void display(void);
void resize(int, int);
void idle(void);
void specialFunction(int, int, int);
void keyboard(unsigned char, int, int);
void specialKeyboard(int, int, int);
void mouse(int, int, int, int);
void mouseMotion(int, int);


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);

	glutInitWindowPosition(50 / 20, 50 / 20);
	glutInitWindowSize(500, 500);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutCreateWindow("Tile 1 - 3D Projection");

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(specialKeyboard);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutReshapeFunc(resize);

	if (!init())
		return 1;

	glutMainLoop();

	return 0;
}


void drawBox()
{
	glTranslatef(translate_x, translate_y, translate_z);
	glRotatef(75, 1, 1, 0);
	glBegin(GL_QUADS);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-14.0f / 20 + 0.5f / 20, -12.0f / 20, 0);//3
	glVertex3f(-14.0f / 20, -12.0f / 20, 0);//2
	glVertex3f(-14.0f / 20, 16.0f / 20, 0);//1
	glVertex3f(-14.0f / 20 + 0.5f / 20, 16.0f / 20, 0);//4

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-20.0f / 20 + 8.0f / 20, 15.3f / 20, 0);
	glVertex3f(-20.0f / 20, 15.3f / 20, 0);
	glVertex3f(-20.0f / 20, 16.0f / 20, 0);
	glVertex3f(-20.0f / 20 + 8.0f / 20, 16.0f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12.0f / 20, 20.0f / 20, 0);
	glVertex3f(-12.0f / 20 + 0.5f / 20, 20.0f / 20, 0);
	glVertex3f(-12.0f / 20 + 0.5f / 20, 11.3f / 20, 0);
	glVertex3f(-12.0f / 20, 11.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12.0f / 20 + 8.0f / 20, 10.5f / 20, 0);
	glVertex3f(-12.0f / 20, 10.5f / 20, 0);
	glVertex3f(-12.0f / 20, 11.3f / 20, 0);
	glVertex3f(-12.0f / 20 + 8.0f / 20, 11.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4.0f / 20, 20.0f / 20, 0);
	glVertex3f(-4.0f / 20, 7.3f / 20, 0);
	glVertex3f(-4.0f / 20 + 0.5f / 20, 7.3f / 20, 0);
	glVertex3f(-4.0f / 20 + 0.5f / 20, 20.0f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4.0f / 20, 7.3f / 20, 0);
	glVertex3f(-4.0f / 20, 6.3f / 20, 0);
	glVertex3f(-4.0f / 20 + 10.0f / 20, 6.3f / 20, 0);
	glVertex3f(-4.0f / 20 + 10.0f / 20, 7.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6.0f / 20 + 0.5f / 20, 6.3f / 20, 0);
	glVertex3f(6.0f / 20, 6.3f / 20, 0);
	glVertex3f(6.0f / 20, 20.0f / 20, 0);
	glVertex3f(6.0f / 20 + 0.5f / 20, 20.0f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6.5f / 20 + 5.0f / 20, 9.6f / 20, 0);
	glVertex3f(6.5f / 20, 9.6f / 20, 0);
	glVertex3f(6.5f / 20, 10.5f / 20, 0);
	glVertex3f(6.5f / 20 + 5.0f / 20, 10.5f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11.5f / 20 + 0.5f / 20, -14.3f / 20, 0);
	glVertex3f(11.5f / 20, -14.3f / 20, 0);
	glVertex3f(11.5f / 20, 10.5f / 20, 0);
	glVertex3f(11.5f / 20 + 0.5f / 20, 10.5f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11.5f / 20 - 9.0f / 20, -14.3f / 20, 0);
	glVertex3f(11.5f / 20, -14.3f / 20, 0);
	glVertex3f(11.5f / 20, -13.3f / 20, 0);
	glVertex3f(11.5f / 20 - 9.0f / 20, -13.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2.5f / 20 + 0.6f / 20, -20.0f / 20, 0);
	glVertex3f(2.5f / 20, -20.0f / 20, 0);
	glVertex3f(2.5f / 20, 6.3f / 20, 0);
	glVertex3f(2.5f / 20 + 0.6f / 20, 6.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-7.0f / 20 + 0.6f / 20, -20.0f / 20, 0);
	glVertex3f(-7.0f / 20, -20.0f / 20, 0);
	glVertex3f(-7.0f / 20, 10.5f / 20, 0);
	glVertex3f(-7.0f / 20 + 0.6f / 20, 10.5f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-7.0f / 20 - 7.0f / 20, -11.3f / 20, 0);
	glVertex3f(-7.0f / 20, -11.3f / 20, 0);
	glVertex3f(-7.0f / 20, -12.3f / 20, 0);
	glVertex3f(-7.0f / 20 - 7.0f / 20, -12.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12.0f / 20 - 0.6f / 20, -20.0f / 20, 0);
	glVertex3f(-12.0f / 20, -20.0f / 20, 0);
	glVertex3f(-12.0f / 20, -12.3f / 20, 0);
	glVertex3f(-12.0f / 20 - 0.6f / 20, -12.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12.0f / 20 + 8.0f / 20, 4.3f / 20, 0);
	glVertex3f(12.0f / 20, 4.3f / 20, 0);
	glVertex3f(12.0f / 20, 5.3f / 20, 0);
	glVertex3f(12.0f / 20 + 8.0f / 20, 5.3f / 20, 0);

	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12.0f / 20 + 8.0f / 20, -7.3f / 20, 0);
	glVertex3f(12.0f / 20, -7.3f / 20, 0);
	glVertex3f(12.0f / 20, -8.3f / 20, 0);
	glVertex3f(12.0f / 20 + 8.0f / 20, -8.3f / 20, 0);

	//Colors Next

	glColor3f(0.40, 0.39, 0.36);
	glVertex3f(-19.5f / 20 + 7.5f / 20, 16.0f / 20, 0);
	glVertex3f(-19.5f / 20, 16.0f / 20, 0);
	glVertex3f(-19.5f / 20, 19.5f / 20, 0);
	glVertex3f(-19.5f / 20 + 7.5f / 20, 19.5f / 20, 0);

	glColor3ub(241, 238, 233);
	glVertex3f(-11.5f / 20 + 7.5f / 20, 11.3f / 20, 0);
	glVertex3f(-11.5f / 20, 11.3f / 20, 0);
	glVertex3f(-11.5f / 20, 19.5f / 20, 0);
	glVertex3f(-11.5f / 20 + 7.5f / 20, 19.5f / 20, 0);

	glColor3ub(67, 61, 56);
	glVertex3f(-3.5f / 20 + 9.5f / 20, 7.3f / 20, 0);
	glVertex3f(-3.5f / 20, 7.3f / 20, 0);
	glVertex3f(-3.5f / 20, 19.5f / 20, 0);
	glVertex3f(-3.5f / 20 + 9.5f / 20, 19.5f / 20, 0);

	glColor3ub(191, 179, 181);
	glVertex3f(6.5f / 20 + 13.0f / 20, 10.5f / 20, 0);
	glVertex3f(6.5f / 20, 10.5f / 20, 0);
	glVertex3f(6.5f / 20, 19.5f / 20, 0);
	glVertex3f(6.5f / 20 + 13.0f / 20, 19.5f / 20, 0);

	glColor3ub(191, 179, 181);
	glVertex3f(12.0f / 20 + 7.5f / 20, 5.3f / 20, 0);
	glVertex3f(12.0f / 20, 5.3f / 20, 0);
	glVertex3f(12.0f / 20, 10.5f / 20, 0);
	glVertex3f(12.0f / 20 + 7.5f / 20, 10.5f / 20, 0);

	glColor3f(0.189, 0.179, 0.180);
	glVertex3f(12.0f / 20 + 7.5f / 20, -20.0f / 20, 0);
	glVertex3f(12.0f / 20, -20.0f / 20, 0);
	glVertex3f(12.0f / 20, -8.3f / 20, 0);
	glVertex3f(12.0f / 20 + 7.5f / 20, -8.3f / 20, 0);

	glColor3f(0.189, 0.179, 0.180);
	glVertex3f(12.5f / 20 - 9.5f / 20, -20.0f / 20, 0);
	glVertex3f(12.5f / 20, -20.0f / 20, 0);
	glVertex3f(12.5f / 20, -14.3f / 20, 0);
	glVertex3f(12.5f / 20 - 9.5f / 20, -14.3f / 20, 0);

	glColor3ub(241, 238, 233);
	glVertex3f(3.1f / 20 + 8.4f / 20, -13.3f / 20, 0);
	glVertex3f(3.1f / 20, -13.3f / 20, 0);
	glVertex3f(3.1f / 20, 6.3f / 20, 0);
	glVertex3f(3.1f / 20 + 8.4f / 20, 6.3f / 20, 0);

	glColor3ub(241, 238, 233);
	glVertex3f(6.5f / 20 + 5.0f / 20, 6.3f / 20, 0);
	glVertex3f(6.5f / 20, 6.3f / 20, 0);
	glVertex3f(6.5f / 20, 9.6f / 20, 0);
	glVertex3f(6.5f / 20 + 5.0f / 20, 9.6f / 20, 0);

	glColor3ub(191, 179, 181);
	glVertex3f(-14.5f / 20 + 7.5f / 20, -11.3f / 20, 0);
	glVertex3f(-13.5f / 20, -11.3f / 20, 0);
	glVertex3f(-13.5f / 20, 10.5f / 20, 0);
	glVertex3f(-14.5f / 20 + 7.5f / 20, 10.5f / 20, 0);

	glColor3ub(191, 179, 181);
	glVertex3f(-14.5f / 20 + 2.5f / 20, 10.5f / 20, 0);
	glVertex3f(-13.5f / 20, 10.5f / 20, 0);
	glVertex3f(-13.5f / 20, 15.3f / 20, 0);
	glVertex3f(-14.5f / 20 + 2.5f / 20, 15.3f / 20, 0);

	glColor3ub(226, 205, 174);
	glVertex3f(-19.5f / 20 + 5.5f / 20, -19.5f / 20, 0);
	glVertex3f(-19.5f / 20, -19.5f / 20, 0);
	glVertex3f(-19.5f / 20, 15.3f / 20, 0);
	glVertex3f(-19.5f / 20 + 5.5f / 20, 15.3f / 20, 0);

	glColor3ub(226, 205, 174);
	glVertex3f(-15.0f / 20 + 2.4f / 20, -19.5f / 20, 0);
	glVertex3f(-15.0f / 20, -19.5f / 20, 0);
	glVertex3f(-15.0f / 20, -12.3f / 20, 0);
	glVertex3f(-15.0f / 20 + 2.4f / 20, -12.3f / 20, 0);

	glColor3ub(241, 238, 233);
	glVertex3f(-12.0f / 20 + 5.0f / 20, -19.5f / 20, 0);
	glVertex3f(-12.0f / 20, -19.5f / 20, 0);
	glVertex3f(-12.0f / 20, -12.3f / 20, 0);
	glVertex3f(-12.0f / 20 + 5.0f / 20, -12.3f / 20, 0);

	glColor3ub(6, 61, 56);
	glVertex3f(-6.4f / 20 + 8.9f / 20, -20.0f / 20, 0);
	glVertex3f(-6.4f / 20, -20.0f / 20, 0);
	glVertex3f(-6.4f / 20, 6.3f / 20, 0);
	glVertex3f(-6.4f / 20 + 8.9f / 20, 6.3f / 20, 0);

	glColor3ub(6, 61, 56);
	glVertex3f(-6.4f / 20 + 2.4f / 20, 6.3f / 20, 0);
	glVertex3f(-6.4f / 20, 6.3f / 20, 0);
	glVertex3f(-6.4f / 20, 10.5f / 20, 0);
	glVertex3f(-6.4f / 20 + 2.4f / 20, 10.5f / 20, 0);

	glColor3ub(6, 6, 56);
	glVertex3f(12.0f / 20 + 8.0f / 20, -7.3f / 20, 0);
	glVertex3f(12.0f / 20, -7.3f / 20, 0);
	glVertex3f(12.0f / 20, 4.4f / 20, 0);
	glVertex3f(12.0f / 20 + 8.0f / 20, 4.4f / 20, 0);

	glColor3ub(58, 42, 43);
	glVertex3f(-20.0f / 20 + 0.5f / 20, -20.0f / 20, 0);
	glVertex3f(-20.0f / 20, -20.0f / 20, 0);
	glVertex3f(-20.0f / 20, 20.0f / 20, 0);
	glVertex3f(-20.0f / 20 + 0.5f / 20, 20.0f / 20, 0);

	glColor3ub(58, 42, 43);
	glVertex3f(19.5f / 20 + 0.5f / 20, -20.0f / 20, 0);
	glVertex3f(19.5f / 20, -20.0f / 20, 0);
	glVertex3f(19.5f / 20, 20.0f / 20, 0);
	glVertex3f(19.5f / 20 + 0.5f / 20, 20.0f / 20, 0);

	glColor3ub(58, 42, 43);
	glVertex3f(-20.0f / 20 + 40.0f / 20, 19.3f / 20, 0);
	glVertex3f(-20.0f / 20, 19.3f / 20, 0);
	glVertex3f(-20.0f / 20, 20.0f / 20, 0);
	glVertex3f(-20.0f / 20 + 40.0f / 20, 20.0f / 20, 0);

	glColor3ub(58, 42, 43);
	glVertex3f(-20.0f / 20 + 40.0f / 20, -19.3f / 20, 0);
	glVertex3f(-20.0f / 20, -19.3f / 20, 0);
	glVertex3f(-20.0f / 20, -20.0f / 20, 0);
	glVertex3f(-20.0f / 20 + 40.0f / 20, -20.0f / 20, 0);

	glEnd();

}

int init(void)
{
	glClearColor(0.93, 0.43, 0.51, 1.0);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glClearDepth(1.0f);

	return 1;
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	gluLookAt(
		0.0f, 0.0f, 3.0f,
		0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f);

	glRotatef(x_rotate, 1.0f, 0.0f, 0.0f);
	glRotatef(y_rotate, 0.0f, 1.0f, 0.0f);

	drawBox();

	glFlush();
	glutSwapBuffers();
}

void resize(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, w, h);

	gluPerspective(grow_shrink, resize_f * w / h, resize_f, 100 * resize_f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void idle(void)
{
	if (!mouseDown)
	{
		x_rotate += 0.3f;
		y_rotate += 0.4f;
	}

	glutPostRedisplay();
}


void specialFunction(int key, int x, int y)
{
	cout << "Escape Key --> exit the program\n\n";
	cout << "U -----------> rotate clockwise\n";
	cout << "W -----------> Up\n";
	cout << "S -----------> Down\n";
	cout << "D -----------> Right\n";
	cout << "A -----------> Left\n";
	cout << "Z -----------> Shrink\n";
	cout << "X -----------> Grow\n";
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(1);
		break;

	case 'w':
	case 'W':
		translate_x += 0.1f;
		break;
	case 's':
	case 'S':
		translate_x -= 0.1f;
		break;
	case 'a':
	case 'A':
		translate_z -= 0.1f;
		break;
	case 'd':
	case 'D':
		translate_z += 0.1f;
		break;
	case 'u':
	case 'U':
		x_rotate += 1.0f;
		y_rotate += 1.0f;
		x_difference += 1.0f;
		y_difference += 1.0f;
		break;

	case 'y':
	case 'Y':
		x_rotate -= 1.0f;
		y_rotate -= 1.0f;
		x_difference += 1.0f;
		y_difference += 1.0f;
		break;

	case 'h':
	case 'H':
		specialFunction(key, x, y);
		break;
	case 'Z':
	case 'z':
		grow_shrink--;
		resize(500, 500);

		break;
	case 'X':
	case 'x':
		grow_shrink++;
		resize(500, 500);

		break;
	}


	glutPostRedisplay();
}

void specialKeyboard(int key, int x, int y)
{
	if (key == GLUT_KEY_F1)
	{
		fullscreen = !fullscreen;

		if (fullscreen)
			glutFullScreen();
		else
		{
			glutReshapeWindow(500, 500);
			glutPositionWindow(50 / 20, 50 / 20);
		}
	}
}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = 1;

		x_difference = x - y_rotate;
		y_difference = -y + x_rotate;
	}
	else
		mouseDown = 0;
}

void mouseMotion(int x, int y)
{
	if (mouseDown)
	{
		y_rotate = x - x_difference;
		x_rotate = y + y_difference;

		glutPostRedisplay();
	}
}