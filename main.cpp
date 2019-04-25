#include<stdlib.h>
#include<Windows.h>
#define GLUT_DISABLE_ATEXIT_HACK
#include<gl/GL.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#define PI 3.1416

void spinDisplayCloud();
void spinDisplaycloud2();
void spinDisplaySun();
void rain();
GLint i,x,y;
int frameNumber = 0;
GLfloat c1x = 5.0;
GLfloat s1x = 5.0;
GLfloat a1x = -10.0;
GLfloat a3x = 60.0;
GLfloat r1y = 30.0;

void output(int x, int y, char *string, void *font)
{
    glColor3f(0.0f, 0.0f, 0.0f);
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i<len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}
}
void output1(int x, int y, char *string, void *font)
{
    glColor3f(1.0f, 1.0f, 1.0f);
	int len, i;
	glRasterPos2f(x, y);
	len = (int)strlen(string);
	for (i = 0; i<len; i++)
	{
		glutBitmapCharacter(font, string[i]);
	}
}

void circle(GLdouble rad)
{
	GLint points = 50;
	GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
	GLdouble theta = 0.0;

	glBegin(GL_POLYGON);
	{
		for (i = 0; i <= 50; i++, theta += delTheta)
		{
			glVertex2f(rad * cos(theta), rad * sin(theta));
		}
	}
	glEnd();
}

void cloudB()

{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();

	//glColor3f (1, 1 ,1);
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}
void car1()
{
	//bottom
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}




void car3()
{
	//bottom
	glColor3f(1.0, 1.0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.9, 0.2, 0);
	glVertex3f(-0.87, 0.5, 0);
	glVertex3f(-0.52, 0.5, 0);
	glEnd();

	//front
	glColor3f(1.0, 1.0, 0.4);
	glBegin(GL_POLYGON);
	glVertex3f(-0.43, 0.2, 0);
	glVertex3f(-0.52, 0.2, 0);
	glVertex3f(-0.52, 0.5, 0);
	glVertex3f(-0.46, 0.45, 0);
	glEnd();

	//top
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.53, 0.5, 0);
	glVertex3f(-0.83, 0.5, 0);
	glVertex3f(-0.77, 0.8, 0);
	glVertex3f(-0.56, 0.8, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(0.0, 0.0, 0.0);///sss
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.06);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.5, .2, 0);
	circle(0.02);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);
	glPushMatrix();
	glTranslatef(-.78, .2, 0);
	circle(0.02);
	glPopMatrix();
}


void a()                                        //mini Cloud
{
	//left

	glPushMatrix();
	glTranslatef(4, 5.5, 0);
	circle(4);
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(-8, 5.5, 0);
	circle(3.5);
	glPopMatrix();

	//top left

	glPushMatrix();
	glTranslatef(-3.5, 9, 0);
	circle(3.5);
	glPopMatrix();

	//top right

	glPushMatrix();
	glTranslatef(1, 9, 0);
	circle(3);
	glPopMatrix();

	//middle

	glPushMatrix();
	glTranslatef(-1.5, 5.5, 0);
	circle(4);
	glPopMatrix();

}

void c()                                        //One Single Cloud
{
	glPushMatrix();
	glColor3f(0, 0.5, 0.5);
	glTranslatef(35, 10, 0);
	a();
	glPopMatrix();


	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(28, 16, 0);
	a();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(20, 10, 0);
	a();
	glPopMatrix();
}

void cloud()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-85.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
}

void cloud4()                                     // Three Cloud
{
	glPushMatrix();
	glTranslatef(-85.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-15.0, 30.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(20.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-60.0, 25.0, 0.0);
	glScalef(0.7, 0.7, 0.0);
	c();
	glPopMatrix();
}


void init(void)
{
	glClearColor(0, 0.749, 1, 0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}
void draw_house()
{
    //left house
    glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.0, -5.0);
	glVertex2f(-2.5, -5.0);
	glVertex2f(-2.5, 30.0);
	glVertex2f(-30.0, 30.0);
	glEnd();

	//floor line
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 5);
    glVertex2i(-3.0,5);
    glEnd();
    //floor line 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 15);
    glVertex2i(-3.0,15);
    glEnd();
    //floor line 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 25);
    glVertex2i(-3.0,25);
    glEnd();
    //door
    glColor3f(0.3f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-19.0, -5.0);
	glVertex2f(-13.0, -5.0);
	glVertex2f(-13.0, 2.0);
	glVertex2f(-19.0, 2.0);
	glEnd();
	//window 2nd floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 18.0);
	glVertex2f(-11.0, 18.0);
	glVertex2f(-11.0, 23.0);
	glVertex2f(-6.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-8.5, 18);
    glVertex2f(-8.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-11, 20.5);
    glVertex2f(-6,20.5);
    glEnd();
	//window 2nd floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-14.0, 18.0);
	glVertex2f(-19.0, 18.0);
	glVertex2f(-19.0, 23.0);
	glVertex2f(-14.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-16.5, 18);
    glVertex2f(-16.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-14, 20.5);
    glVertex2f(-19,20.5);
    glEnd();
	//window 2nd floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.0, 18.0);
	glVertex2f(-27.0, 18.0);
	glVertex2f(-27.0, 23.0);
	glVertex2f(-22.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-24.5, 18);
    glVertex2f(-24.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-22, 20.5);
    glVertex2f(-27,20.5);
    glEnd();
	//window 1st floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 13.0);
	glVertex2f(-11.0, 13.0);
	glVertex2f(-11.0, 8.0);
	glVertex2f(-6.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-8.5, 8);
    glVertex2f(-8.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-6, 10.5);
    glVertex2f(-11,10.5);
    glEnd();

	//window 1st floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-14.0, 13.0);
	glVertex2f(-19.0, 13.0);
	glVertex2f(-19.0, 8.0);
	glVertex2f(-14.0, 8.0);
	glEnd();
		//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-16.5, 8);
    glVertex2f(-16.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-14, 10.5);
    glVertex2f(-19,10.5);
    glEnd();
	//window 1st floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.0, 13.0);
	glVertex2f(-27.0, 13.0);
	glVertex2f(-27.0, 8.0);
	glVertex2f(-22.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-24.5, 8);
    glVertex2f(-24.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-22, 10.5);
    glVertex2f(-27,10.5);
    glEnd();

	//right house
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(2.5, -5.0);
	glVertex2f(30.0, -5.0);
	glVertex2f(30.0, 30.0);
	glVertex2f(2.5, 30.0);
	glEnd();
	//door
    glColor3f(0.3f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(19.0, -5.0);
	glVertex2f(13.0, -5.0);
	glVertex2f(13.0, 2.0);
	glVertex2f(19.0, 2.0);
	glEnd();

	//window 1st floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(6.0, 13.0);
	glVertex2f(11.0, 13.0);
	glVertex2f(11.0, 8.0);
	glVertex2f(6.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(8.5, 8);
    glVertex2f(8.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(11, 10.5);
    glVertex2f(6,10.5);
    glEnd();
	//window 1st floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(14.0, 13.0);
	glVertex2f(19.0, 13.0);
	glVertex2f(19.0, 8.0);
	glVertex2f(14.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(16.5, 8);
    glVertex2f(16.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(14, 10.5);
    glVertex2f(19,10.5);
    glEnd();
	//window 1st floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.0, 13.0);
	glVertex2f(27.0, 13.0);
	glVertex2f(27.0, 8.0);
	glVertex2f(22.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(24.5, 8);
    glVertex2f(24.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(27, 10.5);
    glVertex2f(22,10.5);
    glEnd();
	//window 2nd floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(6.0, 18.0);
	glVertex2f(11.0, 18.0);
	glVertex2f(11.0, 23.0);
	glVertex2f(6.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(8.5, 18);
    glVertex2f(8.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(11, 20.5);
    glVertex2f(6,20.5);
    glEnd();
	//window 2nd floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(14.0, 18.0);
	glVertex2f(19.0, 18.0);
	glVertex2f(19.0, 23.0);
	glVertex2f(14.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(16.5, 18);
    glVertex2f(16.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(14, 20.5);
    glVertex2f(19,20.5);
    glEnd();
	//window 2nd floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.0, 18.0);
	glVertex2f(27.0, 18.0);
	glVertex2f(27.0, 23.0);
	glVertex2f(22.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(24.5, 18);
    glVertex2f(24.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(22, 20.5);
    glVertex2f(27,20.5);
    glEnd();

	//floor line
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(3, 5);
    glVertex2i(30.0,5);
    glEnd();
    //floor line 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(30, 15);
    glVertex2i(3,15);
    glEnd();
    //floor line 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(30, 25);
    glVertex2i(3.0,25);
    glEnd();



}
//color change
void draw_white()
{
    glColor3f(0.9f, 0.9f, 0.8f);
	glBegin(GL_POLYGON);
	glVertex2f(-5.0, 1.0);
	glVertex2f(-8.0, 1.0);
	glVertex2f(-7.0, 5.0);
	glEnd();

	/*glColor3f(0.8f, 0.8f, 0.8f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.5, 30.0);
	glVertex2f(-15.5, 30.0);
	glVertex2f(-10.0, 20.0);
	glEnd();

	glColor3f(0.9f, 0.9f, 0.9f);
	glBegin(GL_POLYGON);
	glVertex2f(-10.0, 9.0);
	glVertex2f(-30.0, 5.0);
	glVertex2f(-30.0, 0.0);
	glEnd();*/
}


void draw_house3()
{
    //left house
    glColor3f(0.7f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.0, -5.0);
	glVertex2f(-2.5, -5.0);
	glVertex2f(-2.5, 30.0);
	glVertex2f(-30.0, 30.0);
	glEnd();

	//floor line
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 5);
    glVertex2i(-3.0,5);
    glEnd();
    //floor line 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 15);
    glVertex2i(-3.0,15);
    glEnd();
    //floor line 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(-30, 25);
    glVertex2i(-3.0,25);
    glEnd();
    //door
    glColor3f(0.3f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-19.0, -5.0);
	glVertex2f(-13.0, -5.0);
	glVertex2f(-13.0, 2.0);
	glVertex2f(-19.0, 2.0);
	glEnd();
	//window 2nd floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 18.0);
	glVertex2f(-11.0, 18.0);
	glVertex2f(-11.0, 23.0);
	glVertex2f(-6.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-8.5, 18);
    glVertex2f(-8.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-11, 20.5);
    glVertex2f(-6,20.5);
    glEnd();
	//window 2nd floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-14.0, 18.0);
	glVertex2f(-19.0, 18.0);
	glVertex2f(-19.0, 23.0);
	glVertex2f(-14.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-16.5, 18);
    glVertex2f(-16.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-14, 20.5);
    glVertex2f(-19,20.5);
    glEnd();
	//window 2nd floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.0, 18.0);
	glVertex2f(-27.0, 18.0);
	glVertex2f(-27.0, 23.0);
	glVertex2f(-22.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-24.5, 18);
    glVertex2f(-24.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-22, 20.5);
    glVertex2f(-27,20.5);
    glEnd();
	//window 1st floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 13.0);
	glVertex2f(-11.0, 13.0);
	glVertex2f(-11.0, 8.0);
	glVertex2f(-6.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-8.5, 8);
    glVertex2f(-8.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-6, 10.5);
    glVertex2f(-11,10.5);
    glEnd();

	//window 1st floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-14.0, 13.0);
	glVertex2f(-19.0, 13.0);
	glVertex2f(-19.0, 8.0);
	glVertex2f(-14.0, 8.0);
	glEnd();
		//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-16.5, 8);
    glVertex2f(-16.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-14, 10.5);
    glVertex2f(-19,10.5);
    glEnd();
	//window 1st floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-22.0, 13.0);
	glVertex2f(-27.0, 13.0);
	glVertex2f(-27.0, 8.0);
	glVertex2f(-22.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-24.5, 8);
    glVertex2f(-24.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-22, 10.5);
    glVertex2f(-27,10.5);
    glEnd();

	//right house
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(2.5, -5.0);
	glVertex2f(30.0, -5.0);
	glVertex2f(30.0, 30.0);
	glVertex2f(2.5, 30.0);
	glEnd();
	//door
    glColor3f(0.3f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(19.0, -5.0);
	glVertex2f(13.0, -5.0);
	glVertex2f(13.0, 2.0);
	glVertex2f(19.0, 2.0);
	glEnd();

	//window 1st floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(6.0, 13.0);
	glVertex2f(11.0, 13.0);
	glVertex2f(11.0, 8.0);
	glVertex2f(6.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(8.5, 8);
    glVertex2f(8.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(11, 10.5);
    glVertex2f(6,10.5);
    glEnd();
	//window 1st floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(14.0, 13.0);
	glVertex2f(19.0, 13.0);
	glVertex2f(19.0, 8.0);
	glVertex2f(14.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(16.5, 8);
    glVertex2f(16.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(14, 10.5);
    glVertex2f(19,10.5);
    glEnd();
	//window 1st floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.0, 13.0);
	glVertex2f(27.0, 13.0);
	glVertex2f(27.0, 8.0);
	glVertex2f(22.0, 8.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(24.5, 8);
    glVertex2f(24.5,13);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(27, 10.5);
    glVertex2f(22,10.5);
    glEnd();
	//window 2nd floor right
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(6.0, 18.0);
	glVertex2f(11.0, 18.0);
	glVertex2f(11.0, 23.0);
	glVertex2f(6.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(8.5, 18);
    glVertex2f(8.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(11, 20.5);
    glVertex2f(6,20.5);
    glEnd();
	//window 2nd floor middle
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(14.0, 18.0);
	glVertex2f(19.0, 18.0);
	glVertex2f(19.0, 23.0);
	glVertex2f(14.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(16.5, 18);
    glVertex2f(16.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(14, 20.5);
    glVertex2f(19,20.5);
    glEnd();
	//window 2nd floor left
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(22.0, 18.0);
	glVertex2f(27.0, 18.0);
	glVertex2f(27.0, 23.0);
	glVertex2f(22.0, 23.0);
	glEnd();
	//window lines
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(24.5, 18);
    glVertex2f(24.5,23);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(22, 20.5);
    glVertex2f(27,20.5);
    glEnd();

	//floor line
	glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(3, 5);
    glVertex2i(30.0,5);
    glEnd();
    //floor line 2
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(30, 15);
    glVertex2i(3,15);
    glEnd();
    //floor line 3
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(30, 25);
    glVertex2i(3.0,25);
    glEnd();
}

void draw_tree()
{
	//1st tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-43.0, 5.0);
	glVertex2f(-38.0, 5.0);
	glVertex2f(-38.0, 10.0);
	glVertex2f(-43.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-30.5, 10.0);
	glVertex2f(-35.5, 15.0);
	glVertex2f(-45.5, 15.0);
	glVertex2f(-50.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-33.0, 15.0);
	glVertex2f(-38.0, 20.0);
	glVertex2f(-43.0, 20.0);
	glVertex2f(-48.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-35.5, 20.0);
	glVertex2f(-40.5, 25.0);
	glVertex2f(-45.5, 20.0);
	glEnd();

	//2nd tree
	glColor3f(0.1f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(43.0, 5.0);
	glVertex2f(38.0, 5.0);
	glVertex2f(38.0, 10.0);
	glVertex2f(43.0, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(30.5, 10.0);
	glVertex2f(35.5, 15.0);
	glVertex2f(45.5, 15.0);
	glVertex2f(50.5, 10.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(33.0, 15.0);
	glVertex2f(38.0, 20.0);
	glVertex2f(43.0, 20.0);
	glVertex2f(48.0, 15.0);
	glEnd();

	glColor3f(0.0f, 0.5f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(35.5, 20.0);
	glVertex2f(40.5, 25.0);
	glVertex2f(45.5, 20.0);
	glEnd();
}
void draw_sun(void)
{

    glPushMatrix();
	glTranslatef(s1x, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 0.5, 0.0);
	circle(3);
	glPopMatrix();
}
void draw_thunder(void)
{
    //right thundr
   glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(33.0, 30.0);
	glVertex2f(30.0, 35.0);
	glVertex2f(33.0, 40.0);
	glVertex2f(36.0, 40.0);
	glVertex2f(33.0, 40.0);
	glVertex2f(36.0, 30.0);
	glVertex2f(20.0, 20.0);
	glEnd();
	//left thunder
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-33.0, 30.0);
	glVertex2f(-30.0, 35.0);
	glVertex2f(-33.0, 40.0);
	glVertex2f(-36.0, 40.0);
	glVertex2f(-33.0, 40.0);
	glVertex2f(-36.0, 30.0);
	glVertex2f(-20.0, 20.0);
	glEnd();
}
void draw_thunder2(void)
{
    //right thundr
   glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(33.0, 30.0);
	glVertex2f(30.0, 35.0);
	glVertex2f(33.0, 40.0);
	glVertex2f(36.0, 40.0);
	glVertex2f(33.0, 40.0);
	glVertex2f(36.0, 30.0);
	glVertex2f(20.0, 20.0);
	glEnd();
	//left thunder
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-33.0, 30.0);
	glVertex2f(-30.0, 35.0);
	glVertex2f(-33.0, 40.0);
	glVertex2f(-36.0, 40.0);
	glVertex2f(-33.0, 40.0);
	glVertex2f(-36.0, 30.0);
	glVertex2f(-20.0, 20.0);
	glEnd();
}
void display2(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
    //top road grass
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, -10.0);
	glVertex2f(-50.0, -10.0);
	glEnd();

    //road
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -10.0);
	glVertex2f(50.0, -10.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(-50.0, -30.0);
	glEnd();
    //divider
	glColor4f(255.0, 255.0, 255.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -19.25);
	glVertex2f(50.0, -19.25);
	glVertex2f(50.0, -20.75);
	glVertex2f(-50.0, -20.75);
	glEnd();
    //below road grass
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -30.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();

     output(-50,-37,"'Hotel Ashoka' has applied normal paint,'Taj Paradise' applied RCUBE paints",GLUT_BITMAP_TIMES_ROMAN_24);
	//SUN
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//3 Cloud
	glPushMatrix();
	glTranslatef(c1x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_house();
	//CARS
	glPushMatrix();
	glTranslatef(a1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(a3x, -25, 0);
	glScalef(40, 20, 0);
	car3();
	glPopMatrix();


	draw_tree();
    output(-28,27,"HOTEL ASHOKA",GLUT_BITMAP_TIMES_ROMAN_24);
    output(6.5,27,"TAJ PARADISE",GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
	glutSwapBuffers();
}
void display4()
{

   glClearColor(0.2, 0.2, 0.2, 0);
   glClear(GL_COLOR_BUFFER_BIT);
    //top road grass
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, -10.0);
	glVertex2f(-50.0, -10.0);
	glEnd();

    //road
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -10.0);
	glVertex2f(50.0, -10.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(-50.0, -30.0);
	glEnd();
    //divider
	glColor4f(255.0, 255.0, 255.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -19.25);
	glVertex2f(50.0, -19.25);
	glVertex2f(50.0, -20.75);
	glVertex2f(-50.0, -20.75);
	glEnd();
    //below road grass
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -30.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();

     output(-50,-37,"'Hotel Ashoka' has applied normal paint,'Taj Paradise' applied RCUBE paints",GLUT_BITMAP_TIMES_ROMAN_24);
	//SUN
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glTranslatef(-20.0, 40.0, 0.0);
	glScalef(1.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	circle(3);
	glPopMatrix();

	//3 Cloud
	glPushMatrix();
	glTranslatef(c1x, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud();
	glPopMatrix();

	draw_house3();
	//CARS
	glPushMatrix();
	glTranslatef(a1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(a3x, -25, 0);
	glScalef(40, 20, 0);
	car3();
	glPopMatrix();


	draw_tree();

    glPushMatrix();
	glTranslatef(0.0, r1y, 0.0);
	glScalef(.8, 1, 0);
	rain();
	glPopMatrix();

    output(-28,27,"HOTEL ASHOKA",GLUT_BITMAP_TIMES_ROMAN_24);
    output(6.5,27,"TAJ PARADISE",GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
	glutSwapBuffers();
	}
void display6()
{
   glClearColor(0, 0.749, 1, 0);
   	glClearColor(0, 0.749, 1, 0);
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
//glColor3f(0.0,0.0,1.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450,580);
glVertex2f(900,580);
glEnd();
glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-20.0,30.0);
	glVertex2f(20.0,30.0);
	glVertex2f(20.0,-30.0);
	glVertex2f(-20,-30.0);
	glEnd();

	glPushMatrix();
	glTranslatef(20.0, 15.0, 0.0);
	glTranslatef(-20.0,15.0, 0.0);
	glScalef(1.0, 0.5, 0.0);
	glColor3f(0.4, 0.4, 0.4);
	circle(20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(20.0, -15.0, 0.0);
	glTranslatef(-20.0,-15.0, 0.0);
	glScalef(1.0, 0.5, 0.0);
	glColor3f(1.0, 0.0, 1.0);
	circle(20);
	glPopMatrix();


	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-12.0,5.0);
	glVertex2f(12.0,5.0);
	glVertex2f(12.0,-5.0);
	glVertex2f(-12,-5.0);
	glEnd();
	output(-11,-1,"RCUBE PAINTS",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-15,-14,"we take pain out of paints",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-20,45,"Use RCUBE for better result",GLUT_BITMAP_TIMES_ROMAN_24);



glFlush();
glutSwapBuffers();
}
void display5(void)
{


    glClearColor(0.0, 0.0, 0.0, 0);
    //glClearColor(0.8, 0.8, 0.8, 0);
	glClear(GL_COLOR_BUFFER_BIT);
    //top road grass
    output1(22,45,"During thunderstorm",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, -10.0);
	glVertex2f(-50.0, -10.0);
	glEnd();

    output(-50,-37,"color of 'Taj paradise' has remained same during thunder occasion",GLUT_BITMAP_TIMES_ROMAN_24);
    //road
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -10.0);
	glVertex2f(50.0, -10.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(-50.0, -30.0);
	glEnd();
    //divider
	glColor4f(255.0, 255.0, 255.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -19.25);
	glVertex2f(50.0, -19.25);
	glVertex2f(50.0, -20.75);
	glVertex2f(-50.0, -20.75);
	glEnd();
    //below road grass
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -30.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();

	//3 Cloud
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glScalef(.8, 1, 0);
	cloud4();
	glPopMatrix();

     output(-50,-37,"color of 'Taj paradise' has remained same during thunder occasion",GLUT_BITMAP_TIMES_ROMAN_24);

	draw_tree();
	draw_house3();
	draw_thunder();
	//draw_white();
	output(-28,27,"HOTEL ASHOKA",GLUT_BITMAP_TIMES_ROMAN_24);
    output(6.5,27,"TAJ PARADISE",GLUT_BITMAP_TIMES_ROMAN_24);
	glFlush();
	glutSwapBuffers();
}
void display3()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 0.8, 0.3, 0.8);
    output(28,45,"IN SUMMER",GLUT_BITMAP_TIMES_ROMAN_24);
    //top road grass
	glColor3f(0.9f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, 12.5);
	glVertex2f(50.0, 12.5);
	glVertex2f(50.0, -10.0);
	glVertex2f(-50.0, -10.0);
	glEnd();

    //road
	glColor3f(0.1f, 0.1f, 0.1f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -10.0);
	glVertex2f(50.0, -10.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(-50.0, -30.0);
	glEnd();
    //divider
	glColor4f(255.0, 255.0, 255.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -19.25);
	glVertex2f(50.0, -19.25);
	glVertex2f(50.0, -20.75);
	glVertex2f(-50.0, -20.75);
	glEnd();
    //below road grass
	glColor3f(0.9f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-50.0, -30.0);
	glVertex2f(50.0, -30.0);
	glVertex2f(50.0, -50.0);
	glVertex2f(-50.0, -50.0);
	glEnd();


	draw_house3();
	//CARS
	glPushMatrix();
	glTranslatef(a1x, -15, 0);
	glScalef(40, 20, 0);
	car1();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(a3x, -25, 0);
	glScalef(40, 20, 0);
	car3();
	glPopMatrix();


    output(-50,-37,"Hotel Ashoka color has been faded but Taj is bright as sun",GLUT_BITMAP_TIMES_ROMAN_24);
	draw_tree();


    output(-28,27,"HOTEL ASHOKA",GLUT_BITMAP_TIMES_ROMAN_24);
    output(6.5,27,"TAJ PARADISE",GLUT_BITMAP_TIMES_ROMAN_24);
	draw_sun();
	glFlush();
	glutSwapBuffers();
}
void rain()
{
    x=5;
    //1st row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-63+i*x, 33);
    glVertex2i(-63.0+i*x,30);
    glEnd();
    }
    //2nd row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-65+i*x, 43);
    glVertex2i(-65.0+i*x,40);
    glEnd();
    }
    //3rd row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-63+i*x, 53);
    glVertex2i(-63.0+i*x,50);
    glEnd();
    }
    //4thd row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-65+i*x, 63);
    glVertex2i(-65.0+i*x,60);
    glEnd();
    }
    //2nd row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-63+i*x, 73);
    glVertex2i(-63.0+i*x,70);
    glEnd();
    }
    //2nd row
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-65+i*x, 83);
    glVertex2i(-65.0+i*x,80);
    glEnd();
    }
    for(i=0;i<30;i++)
    {
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(-63+i*x, 93);
    glVertex2i(-63.0+i*x,90);
    glEnd();
    }
}

void display1( void )
{
	glClearColor(0, 0.749, 1, 0);
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
//glColor3f(0.0,0.0,1.0);
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2f(450,580);
glVertex2f(900,580);
glEnd();
	output(-15,45,"TOPIC:   RCUBE PAINTS",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-10,40,"SUBMITTED  BY:",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-45,30,"RAGHAVENDRA K",GLUT_BITMAP_TIMES_ROMAN_24);
		output(-45,25,"USN-1DS16CS085",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-10,30,"ROHAN SARNAD",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-10,25,"USN-1DS16CS090",GLUT_BITMAP_TIMES_ROMAN_24);
	output(20,30,"RAHUL J",GLUT_BITMAP_TIMES_ROMAN_24);
	output(20,25,"USN-1DS16CS086",GLUT_BITMAP_TIMES_ROMAN_24);
output(-10,15,"SUBMITTED  TO:",GLUT_BITMAP_TIMES_ROMAN_24);
output(-40,5,"Prof. ANNAPOORNA.",GLUT_BITMAP_TIMES_ROMAN_24);
		output(-40,0,"Assistant Professor,DSCE",GLUT_BITMAP_TIMES_ROMAN_24);
	output(15,5,"Prof. DHARA",GLUT_BITMAP_TIMES_ROMAN_24);
	output(15,0,"Assistant Professor,DSCE",GLUT_BITMAP_TIMES_ROMAN_24);
	output(-30,-10,"PRESS '1' FOR THE ADVERTISEMENT TO PLAY",GLUT_BITMAP_TIMES_ROMAN_24);

glFlush();
glutSwapBuffers();
}

void spinDisplayCloud3()
{
	c1x = c1x + .1;
	a1x = a1x + .01;
    a3x = a3x - .01;

	glutPostRedisplay();
}
void key(unsigned char k,int x,int y)
{
	switch(k)
		{
			case '1':glutDisplayFunc(display2);
			    glutIdleFunc(spinDisplayCloud);

				break;
            case '2':glutDisplayFunc(display6);
            glutIdleFunc(spinDisplayCloud3);


				break;


	case 'E':exit(0);
				break;

		}
}
void spinDisplayrain2()
{
    c1x=5;
	r1y = r1y - .03;
	a1x = a1x + .01;
    a3x = a3x - .01;
    if(r1y < -40.0)
    {
        a1x=-10.0;
        a3x=60.0;
        glutKeyboardFunc(key);
        glutDisplayFunc(display5);


    }
	glutPostRedisplay();
}
void spinDisplaySun()
{

	s1x = s1x + .03;
	a1x = a1x + .03;
    a3x = a3x - .03;
    if(s1x > 60.0)
    {

        glutDisplayFunc(display4);
        glutIdleFunc(spinDisplayrain2);


    }
	glutPostRedisplay();
}
void spinDisplayCloud()
{
	c1x = c1x + .03;
	a1x = a1x + .03;
    a3x = a3x - .03;
    if(c1x > 80.0)
    {
        a1x=-10.0;
        a3x=60.0;
        glutDisplayFunc(display3);
        glutIdleFunc(spinDisplaySun);
    }
	glutPostRedisplay();
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Frame1");
	init();
	glutKeyboardFunc(key);
	glutDisplayFunc(display1);

	glutMainLoop();
}
