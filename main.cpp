#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>
#include <mmsystem.h>
using namespace std;


float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC = 0.0f;
float _moveCC = 0.0f;
float _angle1 = 0.0f;
float speed = 0.02f;
int rn = 0;


void rain(){


glPushMatrix();

glScalef(5.0, 5.0, 0.0);


glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.3f, 0.9f);
glVertex2f(0.32f, 0.8f);
glEnd();
//rain-2
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.3f, 0.5f);
glVertex2f(-0.28f, 0.4f);
glEnd();
//rain-3
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.5f, 0.4f);
glVertex2f(0.52f, 0.3f);
glEnd();
//rain-4
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.8f, -0.3f);
glVertex2f(-0.78f, -0.4f);
glEnd();
//rain-5
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.1f, -0.6f);
glVertex2f(-0.08f, -0.7f);
glEnd();
//rain-6
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.5f, -0.4f);
glVertex2f(0.52f, -0.5f);
glEnd();
//rain-7
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.3f, -0.8f);
glVertex2f(0.32f, -0.9f);
glEnd();
//rain-8
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.2f, 0.4f);
glVertex2f(-0.18f, 0.3f);
glEnd();
//rain-9
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.8f, 0.5f);
glVertex2f(0.82f, 0.4f);
glEnd();
//rain-10
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.7f, -0.5f);
glVertex2f(0.72f, -0.6f);
glEnd();
//rain-11
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.8f, 0.8f);
glVertex2f(-0.78f, 0.7f);
glEnd();
//rain-12
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.0f, -0.2f);
glVertex2f(0.02, -0.3f);
glEnd();
//rain-13
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.8f, 0.5f);
glVertex2f(0.82f, 0.4f);
glEnd();
//rain-14
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.0f, -0.8f);
glVertex2f(0.02f, -0.9f);
glEnd();
//rain-15
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.5f, -0.5f);
glVertex2f(-0.48f, -0.6f);
glEnd();
//rain-16
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.7f, 0.0f);
glVertex2f(0.72f, -0.1f);
glEnd();
//rain-17
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.9f, -0.9f);
glVertex2f(0.92f, -1.0f);
glEnd();
//rain-18
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.9f, 1.0f);
glVertex2f(0.92f, 0.9f);
glEnd();
//rain-19
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.95f, 0.8f);
glVertex2f(0.97f, 0.7f);
glEnd();
//rain-20
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.75f, 0.9f);
glVertex2f(0.77f, 0.8f);
glEnd();
//rain-21
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.0f, 1.0f);
glVertex2f(-0.98f, 0.9f);
glEnd();
//rain-22
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.9f, 0.8f);
glVertex2f(-0.88f, 0.7f);
glEnd();
//rain-23
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.75f, 0.1f);
glVertex2f(-0.73f, 0.0f);
glEnd();
//rain-24
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.95f, -0.8f);
glVertex2f(0.97f, -0.9f);
glEnd();
//rain-25
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.92f, -0.6f);
glVertex2f(0.94f, -0.7f);
glEnd();
//rain-26
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.88f, -0.4f);
glVertex2f(0.9f, -0.5f);
glEnd();
//rain-27
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-0.02f, 0.1f);
glVertex2f(0.0f, 0.0f);
glEnd();
//rain-28
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.0f, -0.2f);
glVertex2f(-0.98f, -0.3f);
glEnd();
//rain-29
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(0.4f, -0.3f);
glVertex2f(0.42f, -0.4f);
glEnd();
//rain-30
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2f(-1.0f, -0.9f);
glVertex2f(-0.98f, -1.0f);
glEnd();

///glLoadIdentity();
///glFlush();


glPopMatrix();
}

void rainFull(){
     glPushMatrix(); /// for rain
   glTranslatef(0.0f, _moveCC, 0.0f);

///rain middle Start

    glPushMatrix(); ///rain 0
        glTranslatef(-7.0f, 0.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 1
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 2
        glTranslatef(10.0f, 0.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 4
        glTranslatef(20.0f, 0.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 5
        glTranslatef(30.0f, 0.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 6
        glTranslatef(35.0f, 0.0f, 0.0f);
        rain();
    glPopMatrix();
///rain middle end

///rain up Start

    glPushMatrix(); ///rain 0
        glTranslatef(-7.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 1
        glTranslatef(0.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 2
        glTranslatef(10.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 4
        glTranslatef(20.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 5
        glTranslatef(30.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 6
        glTranslatef(35.0f, 10.0f, 0.0f);
        rain();
    glPopMatrix();
///rain up end

///rain down Start

    glPushMatrix(); ///rain 0
        glTranslatef(-7.0f, -10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 1
        glTranslatef(0.0f, -10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 2
        glTranslatef(10.0f, -10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 4
        glTranslatef(20.0f, -10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 5
        glTranslatef(30.0f, -10.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 6
        glTranslatef(35.0f,-10.0f, 0.0f);
        rain();
    glPopMatrix();
///rain down end


///rain down 2 Start

    glPushMatrix(); ///rain 0
        glTranslatef(-7.0f, -15.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 1
        glTranslatef(0.0f, -15.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 2
        glTranslatef(10.0f, -15.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 4
        glTranslatef(20.0f, -15.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 5
        glTranslatef(30.0f, -15.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 6
        glTranslatef(35.0f,-15.0f, 0.0f);
        rain();
    glPopMatrix();
///rain down 2 end

///rain down 3 Start

    glPushMatrix(); ///rain 0
        glTranslatef(-7.0f, -20.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 1
        glTranslatef(0.0f, -20.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 2
        glTranslatef(10.0f, -20.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 4
        glTranslatef(20.0f, -20.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 5
        glTranslatef(30.0f, -20.0f, 0.0f);
        rain();
    glPopMatrix();

    glPushMatrix(); ///rain 6
        glTranslatef(35.0f,-20.0f, 0.0f);
        rain();
    glPopMatrix();
///rain down 3 end





 glPopMatrix(); /// for rain end

}
void jeti(){

    glPushMatrix();

    glColor3ub(222, 184, 135);
    glTranslatef(20.0f, -7.0f, 0.0f);
    glScalef(3.00, 1.00, 0.00);
    glRotatef(120, 0.0, 0.0, 1.0);
    glutSolidCube(1);

    glPopMatrix();

     glPushMatrix(); // 1st stand

    glColor3ub(184, 134, 11);
    glTranslatef(18.1f, -7.4f, 0.0f);
    glScalef(0.20, 1.00, 0.00);
    glRotatef(180, 0.0, 0.0, 0.0);
    glutSolidCube(1);

    glPopMatrix();

    glPushMatrix(); // 2nd stand

    glColor3ub(184, 134, 11);
    glTranslatef(19.5f, -8.4f, 0.0f);
    glScalef(0.20, 1.40, 0.00);
    glRotatef(180, 0.0, 0.0, 0.0);
    glutSolidCube(1);

    glPopMatrix();


    glPushMatrix(); // 3rd stand

    glColor3ub(184, 134, 11);
    glTranslatef(21.9f, -7.6f, 0.0f);
    glScalef(0.20, 0.80, 0.00);
    glRotatef(180, 0.0, 0.0, 0.0);
    glutSolidCube(1);

    glPopMatrix();


    glPushMatrix(); // stand

    glColor3ub(184, 134, 11);
    glTranslatef(17.5f, -6.0f, 0.0f);
    glScalef(0.20, 3.00, 0.00);
    glRotatef(180, 0.0, 0.0, 0.0);
    glutSolidCube(1);

    glPopMatrix();






}

void drawScene() /// day screen
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(135,206,250);
    glVertex2f(38.0f,3.0f);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);

    glEnd();

    ///sun///
    glPushMatrix();
    glColor3d(255,255,0);
    glTranslatef(30.0, 10.0, 0);
    glScalef(1.75,1.75,1);
    glutSolidSphere(1, 250, 250);
    glPopMatrix();

    ///cloud 1///
    glPushMatrix();

    glTranslatef(_moveC,5.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();  ///cloud 1 end///




///cloud 2///


    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix(); ///cloud 2 end///

    ///cloud 3///

    glPushMatrix();

    glTranslatef(_moveC,3.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();  ///cloud 3 end///


    ///sea portion///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,3.0f);
    glVertex2f(-12.0f,3.0f);
    glVertex2f(-12.0f,-19.0f);

    glEnd();
///Making left side whole in a push pop matrix///
    glPushMatrix();
    glTranslatef(-3.00,-2.95,0);
    glScalef(0.80,0.80,1);

///left soil portion///  village

//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(4.0f,0.0f);

    glVertex2f(4.5f,1.5f);

    glVertex2f(4.2f,3.0f);

    glVertex2f(3.5f,4.1f);
    glVertex2f(2.0f,5.0f);

    glVertex2f(-12.0f,6.0f);

    glVertex2f(-12.0f,0.0f);

    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.0f);
    glVertex2f(5.0f,-9.0f);

    glVertex2f(7.0f,-5.5f);
    glVertex2f(6.0f,-2.2f);

    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();

///house on left side///
//polygon 1 upper roof right
    glPushMatrix();
    glTranslatef(1,-2,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,-0.3f);
    glVertex2f(-6.7f,-0.3f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


//polygon 2 left side roof
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-6.4f,-0.39f);
    glVertex2f(-7.0f,-0.38f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

//polygon 3 middle left
    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,-0.4f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

//polygon 4 window left
    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
    glVertex2f(-6.15f,-1.9f);
    glVertex2f(-6.15f,-1.1f);
    glVertex2f(-6.9f,-1.1f);
    glVertex2f(-6.9f,-1.9f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

//polygon 7
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();



///door:left
//polygon a
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon b
    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon c
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-3.2f,-1.4f);
    glVertex2f(-3.2f,-3.0f);

    glEnd();
    ///second floor///
    glPushMatrix();
    glTranslatef(-20,1.35,0);
    glScalef(0.65,0.65,0);
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();



//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();


///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.4,-3);
    glVertex2f(24.4,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.1,-1.4);
    glVertex2f(25.1,-3);

    glEnd();

    glPopMatrix();

    glPopMatrix();



///tree left side
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
    glPopMatrix();

// designing right side
///right soil portion///  island
//polygon1//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(12.0f,2.0f);
    glVertex2f(11.7f,0.5f);
    glVertex2f(13.5f,-0.7f);
    glVertex2f(17.0f,-1.5f);
    glVertex2f(38.0f,-1.5f);
    glVertex2f(38.0f,3.0f);

    glEnd();


//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(16,-2.0);
    glVertex2f(15,-3);
    glVertex2f(14.5,-4.0);//middle
    glVertex2f(15,-5.0);
    glVertex2f(16,-6.0);
    glVertex2f(18,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-1.5);

    glEnd();



//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(20.2,-7.5);

    glVertex2f(19.8,-8);
    glVertex2f(20.5,-8.5);

    glVertex2f(22,-9.0);

    glVertex2f(28,-10);
    glVertex2f(38,-11);
    glVertex2f(38,-7);

    glEnd();


///house on right side///

//polygon1//
    glPushMatrix();
    glTranslatef(-1,2,0);
    glScalef(0.90,0.90,0);

    glBegin(GL_POLYGON);
    // glTranslatef(5,0,0);
    // glScalef(0,0,0);
    glColor3ub(128,128,07);

    glVertex2f(25.3,1.2);

    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
            glColor3ub(255, 255, 0);

    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    //glColor3ub(75, 0, 130);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);

    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();
///house on right side middle///

//polygon1//
    glPushMatrix();
    glTranslatef(6.4,2.1,0);
    glScalef(0.85,0.55,0);

    glBegin(GL_POLYGON);
    // glTranslatef(5,0,0);
    // glScalef(0,0,0);
    glColor3ub(128,128,07);

    glVertex2f(25.3,1.2);

    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
            glColor3ub(255, 255, 0);

    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    //glColor3ub(75, 0, 130);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);

    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();

///house on right side right///

//polygon1//
    glPushMatrix();
    glTranslatef(18.5,1.2,0);
    glScalef(0.65,0.70,0);

    glBegin(GL_POLYGON);
    // glTranslatef(5,0,0);
    // glScalef(0,0,0);
    glColor3ub(128,128,07);

    glVertex2f(25.3,1.2);

    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
            glColor3ub(255, 255, 0);

    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    // glScalef(0,0,0);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    //glColor3ub(75, 0, 130);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);

    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    //glColor3ub(139,69,19);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();

///Road in front of village///

    glPushMatrix();
    glTranslatef(4.0, -2.5, 1.0);
    glScalef(.75,0.75,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(19,-4.0);
    glVertex2f(25,-7);//left before bend
    glVertex2f(50,-2);//right top
    glVertex2f(50,2.0);

    glEnd();
    glPopMatrix(); /// road end


    glPushMatrix();
    glTranslatef(22, -7.0, 0.0);
    glColor3ub(155, 118, 89);;
    glutSolidSphere(1.0,500,500);
    glPopMatrix();

/// road end
///road from house///
//1st road
glPushMatrix();
    glTranslatef(10.5, 2.8, 1.0);
    glScalef(1.0,1.0,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();
//2nd road
glPushMatrix();
    glTranslatef(22.0, 4.2, 1.0);
    glScalef(0.50,1.0,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();
//3rd road
glPushMatrix();
    glTranslatef(29.2, 0.8, 1.0);
    glScalef(0.50,0.50,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();







///hill view///
/// Triangle hills///
//HIll 1//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-5.5,7.5);
    glColor3ub(154,205,50);
    glVertex2f(-1,3);
    //glVertex2f();
    glEnd();
//HIll 2//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-4.5,3);
    glVertex2f(-2,5.5);
    glColor3ub(154,205,50);

    glVertex2f(2,3);
    //glVertex2f();
    glEnd();

//hill 3
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(4.5,8.5);
    glColor3ub(154,205,50);

    glVertex2f(14,3);
    //glVertex2f();
    glEnd();
//hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(18,6.5);
    glColor3ub(154,205,50);

    glVertex2f(25,3);
    //glVertex2f();
    glEnd();
//hill 5
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(21,3);
    glVertex2f(24,5.5);
    glColor3ub(154,205,50);

    glVertex2f(28.5,3);
    //glVertex2f();
    glEnd();
//hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(32,6.5);
    glColor3ub(154,205,50);

    glVertex2f(38,3);
    //glVertex2f();
    glEnd();




///tree leaves right ///
 glPushMatrix();
    glTranslatef(37.0, 2.5, 1.0);
    glScalef(.75,0.75,0);
 glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.5, 3.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.0, 5.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
glPopMatrix();

///tree upper side///
    glPushMatrix();
    glTranslatef(-0.75, -2.85, 0);

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.5, 3.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.0, 5.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
    glPopMatrix();







///boat-1  near ghaat right
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(18.0f, 0.4f, 0.0f);
        glScalef(.65,0.65,0);

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();







    ///////////////
    ///boat-2 motion right to left
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(75, 0, 130);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);

    glEnd();

    glPopMatrix();



///trying ship left to right///
    glPushMatrix();
    glTranslatef(_moveA,-16.0f, 0.0f);
    glScalef(10.5,10.5,0.0);
    glTranslatef(0.2,0.95,0.0);
    glBegin(GL_POLYGON);

    glColor3ub(10, 10, 30);

    glVertex2f(-0.6f,-0.7f);
    glVertex2f(-0.5f,-0.8f);
    glVertex2f(0.3f,-0.8f);
    glVertex2f(0.4f,-0.7f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(227, 218, 209);

    glVertex2f(-0.48f,-0.6f);
    glVertex2f(-0.5f,-0.7f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.15f,-0.6f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.48f,-0.65f);
    glVertex2f(-0.48f,-0.68f);
    glVertex2f(0.15f,-0.68f);
    glVertex2f(0.15f,-0.65f);

    glEnd();



    ///upper design
    glPushMatrix();
    glTranslatef(0.0,-0.1,0.0);
    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.4f,-0.48f);
    glVertex2f(-.3f,-0.48f);
    glVertex2f(-.3f,-0.5f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.2f,-0.48f);
    glVertex2f(-.1f,-0.48f);
    glVertex2f(-.1f,-0.5f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.0f,-0.5f);
    glVertex2f(-0.0f,-0.48f);
    glVertex2f(.1f,-0.48f);
    glVertex2f(.1f,-0.5f);

    glEnd();
    glPopMatrix();

    glPopMatrix();

///Bridge Design///
//base
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(0,0.4);
    glVertex2f(0,0);
    glVertex2f(15.5,0);
    glVertex2f(15.5,0.4);
    glEnd();
    glPopMatrix();
//road
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(1,1);
    glVertex2f(0,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(14,1);
    glEnd();

    glPopMatrix();
//Borders
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
//upper raling
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(2,1.8);
    glVertex2f(13,1.8);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
// middle line
    glPushMatrix();
    glTranslatef(1.6,0.05,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(4,1.6);
    glVertex2f(4,1.4);
    glVertex2f(8,1.4);
    glVertex2f(8,1.6);
    glEnd();

    glPopMatrix();

//stairs of bridge left
    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(-0.5,0);
    glVertex2f(-1.5,-2);
    glVertex2f(-2.0,-2);
    glVertex2f(0,0);
    glEnd();

    glPopMatrix();
//steps
    glPushMatrix();
    glTranslatef(-1.0,-1.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.3,-1.5,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.6,-0.4,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
//stairs of bridge right
    glPushMatrix();
    glTranslatef(-0.1,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(15.5,0);
    glVertex2f(17,-2);
    glVertex2f(17.4,-2);
    glVertex2f(15.9,0);
    glEnd();

    glPopMatrix();
//steps right
    glPushMatrix();
    glTranslatef(16.4,-1.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(16.6,-1.5,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(16.0,-0.4,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
///Bridge basement left///
    glPushMatrix();
    glTranslatef(-2.2,0.00,0.0);
    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(5,0);
    glVertex2f(6.0,-1.0);
    glVertex2f(6.5,-1.0);
    glVertex2f(5.5,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(1.6,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.5,0);
    glVertex2f(5.5,-1.0);
    glVertex2f(5.0,-1.0);
    glVertex2f(6.0,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(0.1,-0.9,0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.4,0);
    glVertex2f(6.4,-1.5);
    glVertex2f(7.0,-1.5);
    glVertex2f(7.0,0);
    glEnd();

    glPopMatrix();

    glPopMatrix();

///bridge base right
    glPushMatrix();
    glTranslatef(4.0,-0.0,0);

    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(5,0);
    glVertex2f(6.0,-1.0);
    glVertex2f(6.5,-1.0);
    glVertex2f(5.5,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(1.6,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.5,0);
    glVertex2f(5.5,-1.0);
    glVertex2f(5.0,-1.0);
    glVertex2f(6.0,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(0.1,-0.7,0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.4,0);
    glVertex2f(6.4,-1.5);
    glVertex2f(7.0,-1.5);
    glVertex2f(7.0,0);
    glEnd();

    glPopMatrix();

    glPopMatrix();
///light house base///
//base of light house
    glPushMatrix();
    glTranslatef(-4.5,6,0);
    glScalef(0.90,0.90,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-2,-6);
    glColor3ub(255, 215, 0);

    glVertex2f(2,-6);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window below
    glPushMatrix();
    glTranslatef(-4.5,1.5,0);
    glScalef(0.75,0.75,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window middle
    glPushMatrix();
    glTranslatef(-4.5,3.5,0);
    glScalef(0.60,0.60,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window top
    glPushMatrix();
    glTranslatef(-4.5,5.2,0);
    glScalef(0.45,0.45,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house top triangle
    glPushMatrix();
    glTranslatef(-4.5,7.5,0);
    glScalef(0.45,0.45,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(0,1);
    glVertex2f(-2,-1.5);
    glVertex2f(2,-1.5);
    glEnd();
    glPopMatrix();
//light house top circle
    glPushMatrix();
    glTranslatef(-0.8,7.0,0);
    glScalef(0.35,0.35,0);
    glColor3ub(0,0,0);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


///tree near house right///
glPushMatrix();
    glTranslatef(37.0, 2.5, 1.0);
    glScalef(.75,0.75,0);
glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
glPopMatrix();
///windmill structure///
    glPushMatrix();
    glTranslatef(-6.5f,6.0f,0.0f);
    glScalef(0.65,0.65,0.0);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);

    //glColor3ub(0,206,209);
    glVertex2f(31.0f,2.0f);
    glVertex2f(30.0f,-6.0f);
    glVertex2f(34.0f,-6.0f);
    glVertex2f(33.0f,2.0f);
    glVertex2f(32.5f,3.0f);
    glVertex2f(31.5f,3.0f);



    glEnd();




    //circle//
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(32.0f,3.0f,0.0f);
    //glutSolidSphere(1.0,150,150);
   glRotatef(_angle1, 0.0f, 0.0f,1.0f);



    glBegin(GL_QUADS);// first stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.5f,-0.65f);
    glVertex2f(6.0f,-0.65f);
    glVertex2f(6.0f,0.65f);
    glVertex2f(0.5f,0.65f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,6.0f);
    glVertex2f(-0.65f,6.0f);
    glVertex2f(-0.65f,0.5f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(-0.5f,-0.65f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(-6.0f,0.5f);
    glVertex2f(-6.0f,-0.65f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.65f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-6.0f);
    glVertex2f(0.65f,-6.0f);
    glEnd();

    glPopMatrix();

    glPushMatrix();  /// wind mill circle in the middle of blade (blade join)
    glColor3ub(164, 161, 171);
    glTranslatef(32.0f,3.0f,0.0f);
    glutSolidSphere(1.0,150,150);
    glPopMatrix();

    glPushMatrix();/// wind mill circle in the middle of blade (blade join)
        glColor3ub(164, 161, 171);
        glTranslatef(32.0f,3.0f,0.0f);
        glRotatef(-300, 0.0f, 1.0f,0.0f);
        glutSolidCone(1.0, 2.0, 200, 200);

    glPopMatrix();




    glPopMatrix(); /// blade  /// wind mill  end
            jeti(); // ghat 1


    if(rn == 1){
        rainFull();
    }

   ///rainFull(); /// rain full screen function





    glutSwapBuffers();
}


void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);


}

void drawScene2()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-12,38,-19,14);//range
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,0,0);
    glVertex2f(38.0f,3.0f);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);

    glEnd();

        ///Stars///

    glPushMatrix();


    glPointSize(2.0);
    glColor3ub(255,255,255);
    glTranslatef(0.0, 5.0, 0.0);

    glBegin(GL_POINTS);

    glVertex2f(2,4);
    glVertex2f(3,7.5);
    glVertex2f(5,5);
    glVertex2f(-2,8);
    glVertex2f(30,5);
    glVertex2f(-1,9);
    glVertex2f(35,7);
    glVertex2f(-3,7);
    glVertex2f(-7,5);
    glVertex2f(10,7.5);
    glVertex2f(13,8.5);
    glVertex2f(-11,6);
    glVertex2f(37,7.5);
    glVertex2f(-11,4.5);
    glVertex2f(14,7);
    glVertex2f(15,7.5);
    glVertex2f(19,10);
    // glVertex2f(-10,4.5);
    glEnd();

    glPopMatrix();

    ///fullmoon///
    glPushMatrix();
    glColor3ub(217, 217, 217);
    glTranslatef(-8.0, 10.0, 0);
    glutSolidSphere(1.0, 200, 200);
    glPopMatrix();


    ///cloud 1///
    glPushMatrix();

    glTranslatef(_moveC,5.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();  ///cloud 1 end///




///cloud 2///


    glPushMatrix();

    glTranslatef(_moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 8.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(16.0, 9.0, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(14.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(17.0, 8.5, 0);
    glutSolidSphere(0.8, 250, 250);
    glPopMatrix();

    glPopMatrix(); ///cloud 2 end///

    ///cloud 3///

    glPushMatrix();

    glTranslatef(_moveC,3.0f,0.0f);

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 8.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(23.0, 7.0, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(24.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(21.0, 7.5, 0);
    glutSolidSphere(0.75, 250, 250);
    glPopMatrix();

    glPopMatrix();  ///cloud 3 end///


    ///sea portion///
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0, 139, 139);
    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,3.0f);
    glVertex2f(-12.0f,3.0f);
    glVertex2f(-12.0f,-19.0f);

    glEnd();
///Making left side whole in a push pop matrix///
    glPushMatrix();
    glTranslatef(-3.00,-2.95,0);
    glScalef(0.80,0.80,1);

///left soil portion///  village

//polygon 1
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(4.0f,0.0f);

    glVertex2f(4.5f,1.5f);

    glVertex2f(4.2f,3.0f);

    glVertex2f(3.5f,4.1f);
    glVertex2f(2.0f,5.0f);

    glVertex2f(-12.0f,6.0f);

    glVertex2f(-12.0f,0.0f);

    glEnd();

//polygon 2
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.0f);
    glVertex2f(5.0f,-9.0f);

    glVertex2f(7.0f,-5.5f);
    glVertex2f(6.0f,-2.2f);

    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();





///house on left side///
//polygon 1 upper roof right
    glPushMatrix();
    glTranslatef(1,-2,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,-0.3f);
    glVertex2f(-6.7f,-0.3f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


//polygon 2 left side roof
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-6.4f,-0.39f);
    glVertex2f(-7.0f,-0.38f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

//polygon 3 middle left
    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,-0.4f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

//polygon 4 window left
    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(25,25,112);
    glVertex2f(-6.15f,-1.9f);
    glVertex2f(-6.15f,-1.1f);
    glVertex2f(-6.9f,-1.1f);
    glVertex2f(-6.9f,-1.9f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();

//polygon 6
    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

//polygon 7
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();



///door:left
//polygon a
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon b
    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

//polygon c
    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-3.2f,-1.4f);
    glVertex2f(-3.2f,-3.0f);

    glEnd();
    ///second floor///
    glPushMatrix();
    glTranslatef(-20,1.35,0);
    glScalef(0.65,0.65,0);
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();



//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();



///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.4,-3);
    glVertex2f(24.4,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.1,-1.4);
    glVertex2f(25.1,-3);

    glEnd();

    glPopMatrix();

    glPopMatrix();
///light house left///
    glPushMatrix();

    glColor3ub(218, 165, 32);
    glTranslatef(5.9,15.3,3);
    glRotatef(-120,-1,4.5,0);
    glutWireCone(1.9,11.50, 55,55);


    glPopMatrix();


///tree left side
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
    glPopMatrix();

// designing right side
///right soil portion///  island
//polygon1//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(12.0f,2.0f);
    glVertex2f(11.7f,0.5f);
    glVertex2f(13.5f,-0.7f);
    glVertex2f(17.0f,-1.5f);
    glVertex2f(38.0f,-1.5f);
    glVertex2f(38.0f,3.0f);

    glEnd();


//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(16,-2.0);
    glVertex2f(15,-3);
    glVertex2f(14.5,-4.0);//middle
    glVertex2f(15,-5.0);
    glVertex2f(16,-6.0);
    glVertex2f(18,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-1.5);

    glEnd();


//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(20.2,-7.5);

    glVertex2f(19.8,-8);
    glVertex2f(20.5,-8.5);

    glVertex2f(22,-9.0);

    glVertex2f(28,-10);
    glVertex2f(38,-11);
    glVertex2f(38,-7);

    glEnd();



///house on right side///

//polygon1//
    glPushMatrix();
    glTranslatef(-1,2,0);
    glScalef(0.90,0.90,0);

    glBegin(GL_POLYGON);
    glColor3ub(128,128,07);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);

    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();
///house on right side middle///

//polygon1//
    glPushMatrix();
    glTranslatef(6.4,2.1,0);
    glScalef(0.85,0.55,0);

    glBegin(GL_POLYGON);
    glColor3ub(128,128,07);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);

    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();

///house on right side right///

//polygon1//
    glPushMatrix();
    glTranslatef(18.5,1.2,0);
    glScalef(0.65,0.70,0);

    glBegin(GL_POLYGON);
    glColor3ub(128,128,07);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);


    glEnd();
//roof design
glPushMatrix();
     glTranslatef(0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();

glPushMatrix();
     glTranslatef(0.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(1.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(2.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.0,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);

    glEnd();
glPopMatrix();
glPushMatrix();
     glTranslatef(3.5,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(21.6,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(23.3,-1);


    glEnd();
glPopMatrix();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

//polygon6//
    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();

//polygon7//
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);

    glEnd();

///door:right///
//polygon a//
    glBegin(GL_POLYGON);

    glColor3ub(0,0,0);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon b//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.5,-3);
    glVertex2f(24.5,-1.4);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);

    glEnd();

//polygon c//
    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(25.0,-1.4);
    glVertex2f(25.0,-3);

    glEnd();
    glPopMatrix();

///Road in front of village///

    glPushMatrix();
    glTranslatef(4.0, -2.5, 1.0);
    glScalef(.75,0.75,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(19,-4.0);
    glVertex2f(25,-7);//left before bend
    glVertex2f(50,-2);//right top
    glVertex2f(50,2.0);

    glEnd();
    glPopMatrix(); /// road end


    glPushMatrix();
    glTranslatef(22, -7.0, 0.0);
    glColor3ub(155, 118, 89);
    glutSolidSphere(1.0,500,500);
    glPopMatrix();

/// road end
///road from house///
//1st road
glPushMatrix();
    glTranslatef(10.5, 2.8, 1.0);
    glScalef(1.0,1.0,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();
//2nd road
glPushMatrix();
    glTranslatef(22.0, 4.2, 1.0);
    glScalef(0.50,1.0,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();
//3rd road
glPushMatrix();
    glTranslatef(29.2, 0.8, 1.0);
    glScalef(0.50,0.50,0);
    glBegin(GL_POLYGON);

    glColor3ub(155, 118, 89);
    glVertex2f(10,-4.0);
    glVertex2f(12,-8);//left before bend
    glVertex2f(14,-8);//right top
    glVertex2f(12,-4.0);

    glEnd();
    glPopMatrix();


///hill view///
/// Triangle hills///
//HIll 1//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-5.5,7.5);
    glColor3ub(154,205,50);
    glVertex2f(-1,3);
    //glVertex2f();
    glEnd();
//HIll 2//
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-4.5,3);
    glVertex2f(-2,5.5);
    glColor3ub(154,205,50);

    glVertex2f(2,3);
    //glVertex2f();
    glEnd();

//hill 3
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(-1,3);
    glVertex2f(4.5,8.5);
    glColor3ub(154,205,50);

    glVertex2f(14,3);
    //glVertex2f();
    glEnd();
//hill 4
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(14,3);
    glVertex2f(18,6.5);
    glColor3ub(154,205,50);

    glVertex2f(25,3);
    glEnd();
//hill 5
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(21,3);
    glVertex2f(24,5.5);
    glColor3ub(154,205,50);

    glVertex2f(28.5,3);
    glEnd();
//hill 6
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(25,3);
    glVertex2f(32,6.5);
    glColor3ub(154,205,50);

    glVertex2f(38,3);
    glEnd();






///tree upper side///
   ///tree leaves right ///
 glPushMatrix();
    glTranslatef(37.0, 2.5, 1.0);
    glScalef(.75,0.75,0);
 glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-9.5, 3.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-7.5, 1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-8.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-9.0, 5.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
glPopMatrix();
///tree near house right///
glPushMatrix();
    glTranslatef(37.0, 2.5, 1.0);
    glScalef(.75,0.75,0);
glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

//polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();



//triangle 1
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();

//triangle 2
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
glPopMatrix();




///tree upper side///
    glPushMatrix();
    glTranslatef(-0.75, -2.85, 0);

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-9.5, 3.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-7.5, 1.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-8.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(128, 128, 0);
    glTranslatef(-9.0, 5.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();
    glPopMatrix();


///boat-1 motion left to right
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(18.0f, 0.4f, 0.0f);
    glScalef(.65,0.65,0);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();







    ///////////////
    ///boat-2 motion right to left
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(21.0f, -16.5f);
    glVertex2f(17.50f, -16.5f);
    glVertex2f(18.0f, -17.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(17.0f, -18.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(75, 0, 130);
    glVertex2f(20.5f, -16.5f);
    glVertex2f(21.0f, -14.5f);
    glVertex2f(18.5f, -14.5f);
    glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,0,0);
    glVertex2f(19.8f, -14.5f);
    glVertex2f(19.8f, -14.0f);
    glVertex2f(19.7f, -14.0f);
    glVertex2f(19.7f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -18.0f);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(15.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(22.0f, -17.5f);
    glVertex2f(22.0f, -18.0f);
    glVertex2f(23.5f, -17.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(17.0f, -17.5f);
    glVertex2f(18.0f, -17.5f);
    glVertex2f(17.5f, -16.5f);

    glEnd();

    glPopMatrix();

///trying ship///

    glPushMatrix();
    glTranslatef(_moveA,-16.0f, 0.0f);
    glScalef(10.5,10.5,0.0);
    glTranslatef(0.2,0.95,0.0);
    glBegin(GL_POLYGON);

    glColor3ub(10, 10, 30);

    glVertex2f(-0.6f,-0.7f);
    glVertex2f(-0.5f,-0.8f);
    glVertex2f(0.3f,-0.8f);
    glVertex2f(0.4f,-0.7f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(227, 218, 209);

    glVertex2f(-0.48f,-0.6f);
    glVertex2f(-0.5f,-0.7f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.15f,-0.6f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(255, 255, 255);

    glVertex2f(-0.48f,-0.65f);
    glVertex2f(-0.48f,-0.68f);
    glVertex2f(0.15f,-0.68f);
    glVertex2f(0.15f,-0.65f);

    glEnd();



    ///upper design
    glPushMatrix();
    glTranslatef(0.0,-0.1,0.0);
    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.4f,-0.48f);
    glVertex2f(-.3f,-0.48f);
    glVertex2f(-.3f,-0.5f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.2f,-0.48f);
    glVertex2f(-.1f,-0.48f);
    glVertex2f(-.1f,-0.5f);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(8, 7, 6);

    glVertex2f(-0.0f,-0.5f);
    glVertex2f(-0.0f,-0.48f);
    glVertex2f(.1f,-0.48f);
    glVertex2f(.1f,-0.5f);

    glEnd();
    glPopMatrix();

    glPopMatrix();

///Bridge Design///
//base
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 69, 19);
    glVertex2f(0,0.4);
    glVertex2f(0,0);
    glVertex2f(15.5,0);
    glVertex2f(15.5,0.4);
    glEnd();
    glPopMatrix();
//road
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(1,1);
    glVertex2f(0,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(14,1);
    glEnd();

    glPopMatrix();
//Borders
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(2.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(0,0.4);
    glVertex2f(0.3,0.4);
    glVertex2f(2.3,2);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-4.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(12.7,2);
    glVertex2f(15.2,0.4);
    glVertex2f(15.5,0.4);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
//upper raling
    glPushMatrix();
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(2,2);
    glVertex2f(2,1.8);
    glVertex2f(13,1.8);
    glVertex2f(13,2);
    glEnd();

    glPopMatrix();
// middle line
    glPushMatrix();
    glTranslatef(1.6,0.05,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(4,1.6);
    glVertex2f(4,1.4);
    glVertex2f(8,1.4);
    glVertex2f(8,1.6);
    glEnd();

    glPopMatrix();

//stairs of bridge left
    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(-0.5,0);
    glVertex2f(-1.5,-2);
    glVertex2f(-2.0,-2);
    glVertex2f(0,0);
    glEnd();

    glPopMatrix();
//steps
    glPushMatrix();
    glTranslatef(-1.0,-1.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.3,-1.5,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.6,-0.4,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
//stairs of bridge right
    glPushMatrix();
    glTranslatef(-0.1,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(15.5,0);
    glVertex2f(17,-2);
    glVertex2f(17.4,-2);
    glVertex2f(15.9,0);
    glEnd();

    glPopMatrix();
//steps right
    glPushMatrix();
    glTranslatef(16.4,-1.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(16.6,-1.5,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(16.0,-0.4,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(0,0);
    glVertex2f(0,0.18);
    glVertex2f(0.4,0.18);
    glVertex2f(0.4,0);
    glEnd();

    glPopMatrix();
///Bridge basement left///
    glPushMatrix();
    glTranslatef(-2.2,0.00,0.0);
    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(5,0);
    glVertex2f(6.0,-1.0);
    glVertex2f(6.5,-1.0);
    glVertex2f(5.5,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(1.6,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.5,0);
    glVertex2f(5.5,-1.0);
    glVertex2f(5.0,-1.0);
    glVertex2f(6.0,0);
    glEnd();

    glPopMatrix();
//base middle rod
//basement right
    glPushMatrix();
    glTranslatef(0.1,-0.9,0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.4,0);
    glVertex2f(6.4,-1.5);
    glVertex2f(7.0,-1.5);
    glVertex2f(7.0,0);
    glEnd();

    glPopMatrix();

    glPopMatrix();

///bridge base right
    glPushMatrix();
    glTranslatef(4.0,-0.0,0);

    glPushMatrix();
    glTranslatef(0.5,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(5,0);
    glVertex2f(6.0,-1.0);
    glVertex2f(6.5,-1.0);
    glVertex2f(5.5,0);
    glEnd();

    glPopMatrix();
//basement right
    glPushMatrix();
    glTranslatef(1.6,0.09,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.5,0);
    glVertex2f(5.5,-1.0);
    glVertex2f(5.0,-1.0);
    glVertex2f(6.0,0);
    glEnd();

    glPopMatrix();
//base middle rod
//basement right
    glPushMatrix();
    glTranslatef(0.1,-0.7,0);
    glBegin(GL_POLYGON);
    glColor3ub(139, 0, 0);
    glVertex2f(6.4,0);
    glVertex2f(6.4,-1.5);
    glVertex2f(7.0,-1.5);
    glVertex2f(7.0,0);
    glEnd();

    glPopMatrix();

    glPopMatrix();
///light house base///
//base of light house
    glPushMatrix();
    glTranslatef(-4.5,6,0);
    glScalef(0.90,0.90,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-2,-6);
    glColor3ub(255, 215, 0);

    glVertex2f(2,-6);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window below
    glPushMatrix();
    glTranslatef(-4.5,1.5,0);
    glScalef(0.75,0.75,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window middle
    glPushMatrix();
    glTranslatef(-4.5,3.5,0);
    glScalef(0.60,0.60,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house window top
    glPushMatrix();
    glTranslatef(-4.5,5.2,0);
    glScalef(0.45,0.45,0);
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-1,1);
    glVertex2f(-1,-0.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(1,-0.5);
    glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house top triangle
    glPushMatrix();
    glTranslatef(-4.5,7.5,0);
    glScalef(0.45,0.45,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(0,1);
    glVertex2f(-2,-1.5);
    //  glColor3ub(255, 215, 0);

    glVertex2f(2,-1.5);
    //  glVertex2f(1,1);
    glEnd();
    glPopMatrix();
//light house top circle
    glPushMatrix();
    glTranslatef(-0.8,7.0,0);
    glScalef(0.35,0.35,0);
    glColor3ub(0,0,0);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();



///windmill structure///
    glPushMatrix();
    glTranslatef(-6.5f,6.0f,0.0f);
    glScalef(0.65,0.65,0.0);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glColor3ub(192,192,192);

    //glColor3ub(0,206,209);
    glVertex2f(31.0f,2.0f);
    glVertex2f(30.0f,-6.0f);
    glVertex2f(34.0f,-6.0f);
    glVertex2f(33.0f,2.0f);
    glVertex2f(32.5f,3.0f);
    glVertex2f(31.5f,3.0f);



    glEnd();




    //circle//
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(32.0f,3.0f,0.0f);
    //glutSolidSphere(1.0,150,150);
   glRotatef(_angle1, 0.0f, 0.0f,1.0f);



    glBegin(GL_QUADS);// first stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.5f,-0.65f);
    glVertex2f(6.0f,-0.65f);
    glVertex2f(6.0f,0.65f);
    glVertex2f(0.5f,0.65f);
    glEnd();

    glBegin(GL_QUADS);// second stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,6.0f);
    glVertex2f(-0.65f,6.0f);
    glVertex2f(-0.65f,0.5f);
    glEnd();

    glBegin(GL_QUADS);// third stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(-0.5f,-0.65f);
    glVertex2f(-0.5f,0.5f);
    glVertex2f(-6.0f,0.5f);
    glVertex2f(-6.0f,-0.65f);
    glEnd();

    glBegin(GL_QUADS);// fourth stand to hold the blade
    glColor3ub(217, 65, 41);

    glVertex2f(0.65f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-6.0f);
    glVertex2f(0.65f,-6.0f);
    glEnd();

    glPopMatrix();

    glPushMatrix();  /// wind mill circle in the middle of blade (blade join)
    glColor3ub(164, 161, 171);
    glTranslatef(32.0f,3.0f,0.0f);
    glutSolidSphere(1.0,150,150);
    glPopMatrix();

    glPushMatrix();/// wind mill circle in the middle of blade (blade join)
        glColor3ub(164, 161, 171);
        glTranslatef(32.0f,3.0f,0.0f);
        glRotatef(-300, 0.0f, 1.0f,0.0f);
        glutSolidCone(1.0, 2.0, 200, 200);

    glPopMatrix();



    glPopMatrix(); /// blade  /// wind mill  end

        jeti(); // ghat 1


    if(rn == 1){
        rainFull();
    }

   /// rainFull(); /// rain full screen funtion

    glutSwapBuffers();
}

void soundMorning(){
    sndPlaySound("morning.wav", SND_ASYNC|SND_LOOP);
}

void soundNight(){
    sndPlaySound("night.wav", SND_ASYNC|SND_LOOP);
}



void SpecialInput(int key, int x, int y) /// night view
{
    switch(key)
    {
    case GLUT_KEY_UP:

        glutDisplayFunc(drawScene);
        /// morning sound function
      //  soundMorning();

        break;
    case GLUT_KEY_DOWN:

        glutDisplayFunc(drawScene2);
        /// night sound function
       // soundNight();

        break;

    }
    glutPostRedisplay();
}



void update1(int value)
{
    _moveA += speed;

     if(_moveA > 38)
    {
        _moveA = -38;
    }
    //Notify GLUT that the display has changed

    _moveA += 0.13;

    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'o':  /// rain start
        rn=1;
        break;

    case 'p': /// rain stop
        rn=0;
        break;
    case 27:
        exit(0);
        break;

        glutPostRedisplay();
    }
}

void update2(int value)
{


    if(_moveB < -36)
    {
        _moveB = +38;
    }
    //Notify GLUT that the display has changed

    _moveB -= 0.13;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update22(int value) /// for rain
{
    /// have to change here

    if(_moveCC < -10) /// -36
    {
        _moveCC = 38;
    }
    //Notify GLUT that the display has changed

    _moveCC -= 10.00;

    glutTimerFunc(20, update22, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}


//function for windlmill
void update3(int value)
{

    _angle1-=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(10, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}
void update4(int value)
{


    if(_moveC > +36)
    {
        _moveC = -38;
    }
    //Notify GLUT that the display has changed

    _moveC += 0.13;

    glutTimerFunc(20, update4, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}







int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);



    glutInitWindowSize(1500, 1000);

    glutCreateWindow("Transformation");
   // glutFullScreen();


    init();
    glutSpecialFunc(SpecialInput);


    glutDisplayFunc(drawScene);
    //sndPlaySound("", SND_ASYNC|SND_LOOP); /// play sound
    soundMorning();

    glutTimerFunc(20, update1, 0); //Add a timer
    glutTimerFunc(20, update2, 0); //Add a timer
    glutTimerFunc(20, update22, 0); //Add a timer

    glutTimerFunc(10, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutKeyboardFunc(handleKeypress);

    glutMainLoop();
    return 0;
}
// controls O and P for rain control
// Arrow up and down for day night feature

