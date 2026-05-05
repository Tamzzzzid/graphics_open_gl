#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float cloud_right=0.0f;

float car_right=0.0f;
float car_right_key=1;

float car_left=0.0f;
float car_left_key=1;

float baloon_left=0.0f;
float baloon_left_key=1;

float rail_left=0.0f;
float rail_left_key=1;

float rotorAngle = 0.0f;


void circle(float radius, float xc, float yc, float r, float g, float b)//object_id : circle1
{
  //circle
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
  {
    glColor3ub(r,g,b);
    float pi=3.1416; float A=(i*2*pi)/200;
    float x = radius * cos(A);
    float y = radius * sin(A); glVertex2f(x+xc,y+yc);
  }
  glEnd();
}


void carLD()//object_id : carLD1
{
//PURPLE CAR
glBegin(GL_QUADS);
glColor3f(0.5, 0.2, 0.7);
glVertex2f(-0.60, -0.78);
glVertex2f(-0.37, -0.78);
glVertex2f(-0.41, -0.74);
glVertex2f(-0.54, -0.74);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.5, 0.2, 0.7);
glVertex2f(-0.60, -0.83);
glVertex2f(-0.37, -0.83);
glVertex2f(-0.37, -0.78);
glVertex2f(-0.60, -0.78);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.5, 0.2, 0.7);
glVertex2f(-0.66, -0.83);
glVertex2f(-0.60, -0.83);
glVertex2f(-0.60, -0.78);
glVertex2f(-0.66, -0.80);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.5, 0.2, 0.7);
glVertex2f(-0.37, -0.83);
glVertex2f(-0.34, -0.83);
glVertex2f(-0.34, -0.79);
glVertex2f(-0.37, -0.78);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(-0.66, -0.82);
glVertex2f(-0.64, -0.82);
glVertex2f(-0.64, -0.80);
glVertex2f(-0.66, -0.80);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-0.36, -0.81);
glVertex2f(-0.34, -0.81);
glVertex2f(-0.34, -0.79);
glVertex2f(-0.36, -0.79);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(-0.58, -0.78);
glVertex2f(-0.45, -0.78);
glVertex2f(-0.45, -0.76);
glVertex2f(-0.54, -0.76);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(-0.44, -0.78);
glVertex2f(-0.40, -0.78);
glVertex2f(-0.42, -0.76);
glVertex2f(-0.44, -0.76);
glEnd();

circle(0.04, -0.60, -0.86, 40, 40, 40);
circle(0.02, -0.60, -0.86, 180, 180, 180);

circle(0.04, -0.40, -0.86, 40, 40, 40);
circle(0.02, -0.40, -0.86, 180, 180, 180);

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.445, -0.74);
glVertex2f(-0.445, -0.83);
glEnd();
}

void carLU()//object_id : carLU1
{
//TRUCK
glBegin(GL_QUADS);
glColor3f(0.9, 0.5, 0.1);
glVertex2f(-0.68, -0.42);
glVertex2f(-0.40, -0.42);
glVertex2f(-0.40, -0.60);
glVertex2f(-0.68, -0.60);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9, 0.5, 0.1);
glVertex2f(-0.40, -0.45);
glVertex2f(-0.31, -0.45);
glVertex2f(-0.25, -0.51);
glVertex2f(-0.40, -0.51);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9, 0.5, 0.1);
glVertex2f(-0.40, -0.51);
glVertex2f(-0.25, -0.51);
glVertex2f(-0.25, -0.60);
glVertex2f(-0.40, -0.60);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(-0.68, -0.55);
glVertex2f(-0.66, -0.55);
glVertex2f(-0.66, -0.58);
glVertex2f(-0.68, -0.58);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(-0.27, -0.55);
glVertex2f(-0.25, -0.55);
glVertex2f(-0.25, -0.58);
glVertex2f(-0.27, -0.58);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(-0.39, -0.46);
glVertex2f(-0.31, -0.46);
glVertex2f(-0.26, -0.51);
glVertex2f(-0.39, -0.51);
glEnd();

circle(0.05, -0.61, -0.61, 40, 40, 40);
circle(0.02, -0.61, -0.61, 180, 180, 180);

circle(0.05, -0.33, -0.61, 40, 40, 40);
circle(0.02, -0.33, -0.61, 180, 180, 180);

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.40, -0.42);
glVertex2f(-0.40, -0.60);
glEnd();
}

void carRD()//object_id : carRD1
{
//BLUE CAR
glBegin(GL_QUADS);
glColor3f(0.2, 0.5, 0.8);
glVertex2f(0.37, -0.82);
glVertex2f(0.51, -0.82);
glVertex2f(0.51, -0.74);
glVertex2f(0.37, -0.77);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2, 0.5, 0.8);
glVertex2f(0.51, -0.82);
glVertex2f(0.75, -0.82);
glVertex2f(0.75, -0.74);
glVertex2f(0.51, -0.74);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2, 0.5, 0.8);
glVertex2f(0.75, -0.82);
glVertex2f(0.91, -0.82);
glVertex2f(0.91, -0.75);
glVertex2f(0.75, -0.75);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2, 0.5, 0.8);
glVertex2f(0.51, -0.74);
glVertex2f(0.75, -0.74);
glVertex2f(0.75, -0.70);
glVertex2f(0.53, -0.70);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.37, -0.82);
glVertex2f(0.39, -0.82);
glVertex2f(0.39, -0.79);
glVertex2f(0.37, -0.79);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.89, -0.81);
glVertex2f(0.91, -0.81);
glVertex2f(0.91, -0.78);
glVertex2f(0.89, -0.78);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(0.54, -0.73);
glVertex2f(0.66, -0.73);
glVertex2f(0.66, -0.71);
glVertex2f(0.55, -0.71);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(0.68, -0.73);
glVertex2f(0.74, -0.73);
glVertex2f(0.74, -0.71);
glVertex2f(0.68, -0.71);
glEnd();

circle(0.06, 0.48, -0.85, 40, 40, 40);
circle(0.03, 0.48, -0.85, 180, 180, 180);

circle(0.06, 0.81, -0.85, 40, 40, 40);
circle(0.03, 0.81, -0.85, 180, 180, 180);

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(0.66, -0.74);
glVertex2f(0.66, -0.82);
glVertex2f(0.75, -0.75);
glVertex2f(0.75, -0.82);
glEnd();
}

void carRU()//object_id : carRU1
{
//RED CAR
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.3);
glVertex2f(0.45, -0.56);
glVertex2f(0.92, -0.56);
glVertex2f(0.92, -0.54);
glVertex2f(0.45, -0.54);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.3);
glVertex2f(0.45, -0.54);
glVertex2f(0.82, -0.54);
glVertex2f(0.80, -0.51);
glVertex2f(0.45, -0.50);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.3);
glVertex2f(0.82, -0.54);
glVertex2f(0.92, -0.54);
glVertex2f(0.92, -0.52);
glVertex2f(0.80, -0.51);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.3);
glVertex2f(0.53, -0.50);
glVertex2f(0.80, -0.51);
glVertex2f(0.77, -0.45);
glVertex2f(0.59, -0.45);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 0.0);
glVertex2f(0.45, -0.54);
glVertex2f(0.47, -0.54);
glVertex2f(0.47, -0.52);
glVertex2f(0.45, -0.52);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.90, -0.54);
glVertex2f(0.92, -0.54);
glVertex2f(0.92, -0.52);
glVertex2f(0.90, -0.52);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(0.56, -0.49);
glVertex2f(0.67, -0.49);
glVertex2f(0.67, -0.46);
glVertex2f(0.60, -0.46);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.6, 0.8, 0.9);
glVertex2f(0.69, -0.49);
glVertex2f(0.78, -0.49);
glVertex2f(0.76, -0.46);
glVertex2f(0.69, -0.46);
glEnd();

circle(0.04, 0.51, -0.59, 40, 40, 40);
circle(0.02, 0.51, -0.59, 180, 180, 180);

circle(0.04, 0.83, -0.59, 40, 40, 40);
circle(0.02, 0.83, -0.59, 180, 180, 180);

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(0.68, -0.45);
glVertex2f(0.68, -0.56);
glEnd();
}

void road()//object_id : road1
{
//road
glBegin(GL_QUADS);
glColor3f(0.0, 0.7, 0.0);
glVertex2f(-1.0, -0.4);
glVertex2f(1.0, -0.4);
glVertex2f(1.0, -0.45);
glVertex2f(-1.0, -0.45);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.69, 0.686, 0.678);
glVertex2f(-1.0, -0.45);
glVertex2f(1.0, -0.45);
glVertex2f(1.0, -0.95);
glVertex2f(-1.0, -0.95);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0, 0.7, 0.0);
glVertex2f(-1.0, -0.95);
glVertex2f(1.0, -0.95);
glVertex2f(1.0, -1.0);
glVertex2f(-1.0, -1.0);
glEnd();

}


void drawBase()//object_id : drawBase1
{
    //drawBase
    // The static tower
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2f(0.27, -0.40);
    glVertex2f(0.33, -0.40);
    glVertex2f(0.31, 0.0);
    glVertex2f(0.29, 0.0);
    glEnd();
}

void drawBlades()//object_id : drawBlades1
{
    //drawBlades
    // Blade 1 (Top)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex2f(0.29, 0.0);
    glVertex2f(0.31, 0.0);
    glVertex2f(0.34, 0.14);
    glVertex2f(0.26, 0.14);
    glEnd();

    // Blade 2 (Left)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex2f(0.29, 0.0);
    glVertex2f(0.29, -0.02);
    glVertex2f(0.17, -0.07);
    glVertex2f(0.16, -0.02);
    glEnd();

    // Blade 3 (Right)
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8);
    glVertex2f(0.31, 0.0);
    glVertex2f(0.31, -0.02);
    glVertex2f(0.44, -0.08);
    glVertex2f(0.47, -0.04);
    glEnd();
}

void treeLeft()//object_id : treeLeft1
{
//treeLeft
glBegin(GL_QUADS);
glColor3f(0.5, 0.3, 0.1);
glVertex2f(0.10, -0.40);
glVertex2f(0.15, -0.40);
glVertex2f(0.15, -0.30);
glVertex2f(0.10, -0.30);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.4, 0.9, 0.4);
glVertex2f(0.05, -0.30);
glVertex2f(0.20, -0.30);
glVertex2f(0.125, -0.17);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.1, 0.5, 0.1);
glVertex2f(0.07, -0.23);
glVertex2f(0.18, -0.23);
glVertex2f(0.125, -0.11);
glEnd();
}

void treeRight()//object_id : treeRight1
{
//treeRight
glBegin(GL_QUADS);
glColor3f(0.5, 0.3, 0.1);
glVertex2f(0.50, -0.40);
glVertex2f(0.54, -0.40);
glVertex2f(0.54, -0.28);
glVertex2f(0.50, -0.28);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.4, 0.9, 0.4);
glVertex2f(0.45, -0.28);
glVertex2f(0.59, -0.28);
glVertex2f(0.52, -0.15);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.1, 0.5, 0.1);
glVertex2f(0.48, -0.20);
glVertex2f(0.56, -0.20);
glVertex2f(0.52, -0.10);
glEnd();
}

void buildingRight()//object_id : buildingRight1
{
//buildingRight
glBegin(GL_QUADS);
glColor3f(0.7, 0.4, 0.3);
glVertex2f(0.66, -0.40);
glVertex2f(0.80, -0.40);
glVertex2f(0.80, 0.25);
glVertex2f(0.66, 0.20);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7, 0.4, 0.3);
glVertex2f(0.80, -0.40);
glVertex2f(1.0, -0.40);
glVertex2f(1.0, 0.20);
glVertex2f(0.80, 0.25);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);

glVertex2f(0.66, 0.14);
glVertex2f(0.80, 0.16);
glVertex2f(0.80, 0.16);
glVertex2f(1.0, 0.14);

glVertex2f(0.66, 0.06);
glVertex2f(0.80, 0.08);
glVertex2f(0.80, 0.08);
glVertex2f(1.0, 0.06);

glVertex2f(0.66, -0.02);
glVertex2f(0.80, 0.0);
glVertex2f(0.80, 0.0);
glVertex2f(1.0, -0.02);

glVertex2f(0.66, -0.10);
glVertex2f(0.80, -0.08);
glVertex2f(0.80, -0.08);
glVertex2f(1.0, -0.10);

glVertex2f(0.66, -0.17);
glVertex2f(0.80, -0.15);
glVertex2f(0.80, -0.15);
glVertex2f(1.0, -0.17);

glVertex2f(0.66, -0.25);
glVertex2f(0.80, -0.22);
glVertex2f(0.80, -0.22);
glVertex2f(1.0, -0.25);

glVertex2f(0.66, -0.33);
glVertex2f(0.80, -0.31);
glVertex2f(0.80, -0.31);
glVertex2f(1.0, -0.33);

glVertex2f(0.66, -0.40);
glVertex2f(0.66, 0.20);
glVertex2f(0.80, -0.40);
glVertex2f(0.80, 0.25);
glVertex2f(1.0, -0.40);
glVertex2f(1.0, 0.20);

glVertex2f(0.66, 0.20);
glVertex2f(0.80, 0.25);
glVertex2f(0.80, 0.25);
glVertex2f(1.0, 0.20);

glEnd();
}


void buildingLeft()//object_id : buildingLeft1
{
//buildingLeft
glBegin(GL_QUADS);
glColor3f(0.5, 0.6, 0.7);
glVertex2f(-1.0, -0.40);
glVertex2f(-0.65, -0.40);
glVertex2f(-0.65, 0.32);
glVertex2f(-1.0, 0.32);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8, 0.5, 0.3);
glVertex2f(-0.88, -0.40);
glVertex2f(-0.76, -0.40);
glVertex2f(-0.76, -0.26);
glVertex2f(-0.88, -0.26);
glEnd();

glColor3f(0.6, 0.8, 0.9);
glBegin(GL_QUADS);
glVertex2f(-0.95, 0.18);
glVertex2f(-0.85, 0.18);
glVertex2f(-0.85, 0.28);

glVertex2f(-0.95, 0.28);
glVertex2f(-0.95, 0.06);
glVertex2f(-0.85, 0.06);
glVertex2f(-0.85, 0.16);
glVertex2f(-0.95, 0.16);
glVertex2f(-0.95, -0.10);
glVertex2f(-0.85, -0.10);
glVertex2f(-0.85, 0.0);
glVertex2f(-0.95, 0.0);
glVertex2f(-0.95, -0.24);
glVertex2f(-0.85, -0.24);
glVertex2f(-0.85, -0.14);


glVertex2f(-0.95, -0.14);
glVertex2f(-0.79, 0.18);
glVertex2f(-0.69, 0.18);
glVertex2f(-0.69, 0.28);
glVertex2f(-0.79, 0.28);
glVertex2f(-0.79, 0.06);
glVertex2f(-0.69, 0.06);
glVertex2f(-0.69, 0.16);
glVertex2f(-0.79, 0.16);
glVertex2f(-0.79, -0.10);
glVertex2f(-0.69, -0.10);
glVertex2f(-0.69, 0.0);
glVertex2f(-0.79, 0.0);
glVertex2f(-0.79, -0.24);
glVertex2f(-0.69, -0.24);
glVertex2f(-0.69, -0.14);
glVertex2f(-0.79, -0.14);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-1.0, -0.40);
glVertex2f(-1.0, 0.32);
glVertex2f(-0.65, -0.40);
glVertex2f(-0.65, 0.32);
glVertex2f(-1.0, 0.32);
glVertex2f(-0.65, 0.32);
glEnd();
}

void billboard()//object_id : billboard1
{
//billboard
glBegin(GL_QUADS);
glColor3f(0.3, 0.3, 0.3);
glVertex2f(-0.58, -0.40);
glVertex2f(-0.56, -0.40);
glVertex2f(-0.56, -0.06);
glVertex2f(-0.58, -0.06);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.3, 0.3, 0.3);
glVertex2f(-0.34, -0.40);
glVertex2f(-0.32, -0.40);
glVertex2f(-0.32, -0.06);
glVertex2f(-0.34, -0.06);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.4, 0.4, 0.4);
glVertex2f(-0.62, -0.06);
glVertex2f(-0.28, -0.06);
glVertex2f(-0.28, 0.08);
glVertex2f(-0.62, 0.08);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9, 0.9, 0.9);
glVertex2f(-0.60, -0.04);
glVertex2f(-0.30, -0.04);
glVertex2f(-0.30, 0.06);
glVertex2f(-0.60, 0.06);
glEnd();
}

void streetLight()//object_id : streetLight1
{
//streetLight
glBegin(GL_QUADS);
glColor3f(0.2, 0.2, 0.2);
glVertex2f(-0.46, -0.40);
glVertex2f(-0.44, -0.40);
glVertex2f(-0.44, 0.15);
glVertex2f(-0.46, 0.15);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2, 0.2, 0.2);
glVertex2f(-0.46, 0.13);
glVertex2f(-0.38, 0.13);
glVertex2f(-0.38, 0.15);
glVertex2f(-0.46, 0.15);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2f(-0.40, 0.11);
glVertex2f(-0.36, 0.11);
glVertex2f(-0.36, 0.13);
glVertex2f(-0.40, 0.13);
glEnd();
}

void buildingR()//object_id : buildingR1
{
//middle building
glBegin(GL_POLYGON);
glColor3f(0.4, 0.6, 0.5);
glVertex2f(-0.25, -0.40);
glVertex2f(-0.02, -0.40);
glVertex2f(-0.02, 0.02);
glVertex2f(-0.12, 0.06);
glVertex2f(-0.25, 0.02);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8, 0.5, 0.3);
glVertex2f(-0.17, -0.40);
glVertex2f(-0.10, -0.40);
glVertex2f(-0.10, -0.30);
glVertex2f(-0.17, -0.30);
glEnd();

glColor3f(0.6, 0.8, 0.9);
glBegin(GL_QUADS);
glVertex2f(-0.23, -0.04);
glVertex2f(-0.13, 0.0);
glVertex2f(-0.13, 0.04);
glVertex2f(-0.23, 0.0);
glVertex2f(-0.23, -0.12);
glVertex2f(-0.13, -0.08);
glVertex2f(-0.13, -0.04);
glVertex2f(-0.23, -0.08);
glVertex2f(-0.23, -0.20);
glVertex2f(-0.13, -0.16);
glVertex2f(-0.13, -0.12);
glVertex2f(-0.23, -0.16);
glVertex2f(-0.23, -0.28);
glVertex2f(-0.13, -0.24);
glVertex2f(-0.13, -0.20);
glVertex2f(-0.23, -0.24);

glVertex2f(-0.11, 0.0);
glVertex2f(-0.04, -0.02);
glVertex2f(-0.04, 0.02);
glVertex2f(-0.11, 0.04);
glVertex2f(-0.11, -0.08);
glVertex2f(-0.04, -0.10);
glVertex2f(-0.04, -0.06);
glVertex2f(-0.11, -0.04);
glVertex2f(-0.11, -0.16);
glVertex2f(-0.04, -0.18);
glVertex2f(-0.04, -0.14);
glVertex2f(-0.11, -0.12);
glVertex2f(-0.11, -0.24);
glVertex2f(-0.04, -0.26);
glVertex2f(-0.04, -0.22);
glVertex2f(-0.11, -0.20);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.12, -0.40);
glVertex2f(-0.12, 0.06);
glVertex2f(-0.25, -0.40);
glVertex2f(-0.25, 0.02);
glVertex2f(-0.02, -0.40);
glVertex2f(-0.02, 0.02);
glVertex2f(-0.25, 0.02);
glVertex2f(-0.12, 0.06);
glVertex2f(-0.12, 0.06);
glVertex2f(-0.02, 0.02);
glEnd();
}


void clouds()//object_id : clouds1
{
//clouds
circle(0.04, -0.75, 0.90, 255, 255, 255);
circle(0.05, -0.70, 0.92, 255, 255, 255);
circle(0.04, -0.65, 0.88, 255, 255, 255);
circle(0.04, -0.80, 0.88, 255, 255, 255);
circle(0.05, -0.72, 0.86, 255, 255, 255);

circle(0.04, 0.20, 0.88, 255, 255, 255);
circle(0.05, 0.25, 0.92, 255, 255, 255);
circle(0.04, 0.30, 0.88, 255, 255, 255);
circle(0.04, 0.15, 0.86, 255, 255, 255);
circle(0.05, 0.22, 0.84, 255, 255, 255);
}



void hotAirBalloons()//object_id : hotAirBalloons1
{
//hotAirBalloons
circle(0.06, -0.40, 0.85, 200, 50, 50);

glBegin(GL_QUADS);
glColor3f(0.6, 0.4, 0.2);
glVertex2f(-0.43, 0.65);
glVertex2f(-0.37, 0.65);
glVertex2f(-0.37, 0.70);
glVertex2f(-0.43, 0.70);
glEnd();

glLineWidth(1.0);
glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-0.43, 0.70);
glVertex2f(-0.45, 0.81);
glVertex2f(-0.37, 0.70);
glVertex2f(-0.35, 0.81);
glEnd();

circle(0.06, 0.45, 0.85, 50, 100, 200);

glBegin(GL_QUADS);
glColor3f(0.6, 0.4, 0.2);
glVertex2f(0.42, 0.65);
glVertex2f(0.48, 0.65);
glVertex2f(0.48, 0.70);
glVertex2f(0.42, 0.70);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(0.42, 0.70);
glVertex2f(0.40, 0.81);
glVertex2f(0.48, 0.70);
glVertex2f(0.50, 0.81);
glEnd();
}

void metroRail()//object_id : metroRail1
{
//metroRail

glBegin(GL_QUADS);
glColor3f(0.2, 0.2, 0.2);
glVertex2f(-0.25, 0.45);
glVertex2f(-0.20, 0.45);
glVertex2f(-0.20, 0.55);
glVertex2f(-0.25, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.2, 0.2, 0.2);
glVertex2f(0.15, 0.45);
glVertex2f(0.20, 0.45);
glVertex2f(0.20, 0.55);
glVertex2f(0.15, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.4, 0.6, 0.8);
glVertex2f(-0.60, 0.42);
glVertex2f(-0.25, 0.42);
glVertex2f(-0.25, 0.58);
glVertex2f(-0.50, 0.58);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.4, 0.6, 0.8);
glVertex2f(-0.20, 0.42);
glVertex2f(0.15, 0.42);
glVertex2f(0.15, 0.58);
glVertex2f(-0.20, 0.58);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.4, 0.6, 0.8);
glVertex2f(0.20, 0.42);
glVertex2f(0.55, 0.42);
glVertex2f(0.55, 0.58);
glVertex2f(0.20, 0.58);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8, 0.9, 1.0);
glVertex2f(-0.48, 0.48);
glVertex2f(-0.28, 0.48);
glVertex2f(-0.28, 0.55);
glVertex2f(-0.42, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8, 0.9, 1.0);
glVertex2f(-0.17, 0.48);
glVertex2f(0.12, 0.48);
glVertex2f(0.12, 0.55);
glVertex2f(-0.17, 0.55);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8, 0.9, 1.0);
glVertex2f(0.23, 0.48);
glVertex2f(0.52, 0.48);
glVertex2f(0.52, 0.55);
glVertex2f(0.23, 0.55);
glEnd();

circle(0.02, -0.50, 0.42, 50, 50, 50);
circle(0.02, -0.32, 0.42, 50, 50, 50);
circle(0.02, -0.12, 0.42, 50, 50, 50);
circle(0.02, 0.05, 0.42, 50, 50, 50);
circle(0.02, 0.28, 0.42, 50, 50, 50);
circle(0.02, 0.45, 0.42, 50, 50, 50);
}

void metroline()//object_id : metroline1
{
    //metroline
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex2f(-1.0, 0.38);
    glVertex2f(1.0, 0.38);
    glVertex2f(1.0, 0.40);
    glVertex2f(-1.0, 0.40);
    glEnd();
}



void display()//object_id : display1
{
    glClearColor(0, 0.765, 1,0.8) ;
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    road();
    metroline();
    treeLeft();
    drawBase();
    glPushMatrix();

    glTranslatef(0.30f, 0.0f, 0.0f);
    glRotatef(rotorAngle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-0.30f, 0.0f, 0.0f);

    drawBlades();

    glPopMatrix();

    treeRight();
    buildingRight();

    buildingLeft();
    billboard();
    streetLight();
    buildingR();



    //cloud------------------------------------------------------
    glPushMatrix();
    glTranslatef(cloud_right, 0.0, 0.0);
    clouds();
    glPopMatrix();
    //car-up

    if(car_right_key==1){
        glPushMatrix();
        glTranslatef(car_right, 0.0, 0.0);
        //red car
        carRU();
        //truck
        carLU();
        glPopMatrix();

    }
    if(car_right_key==0){
        carRU();
        carLU();

    }


    //car-down

    if(car_left_key==1){
        glPushMatrix();
        glTranslatef(car_left, 0.0, 0.0);
        //blue car
        carRD();
        //violet car
        carLD();
        glPopMatrix();

    }
    if(car_left_key==0){
        carRD();
        carLD();
    }
    //baloon
    if(baloon_left_key==1){
        glPushMatrix();
        glTranslatef(baloon_left, 0.0, 0.0);
        hotAirBalloons();
        glPopMatrix();

    }
    if(baloon_left_key==0){
        hotAirBalloons();
    }

    //metro rail

    if(rail_left_key==1){
        glPushMatrix();
        glTranslatef(rail_left, 0.0, 0.0);
        metroRail();
        glPopMatrix();

    }
    if(rail_left_key==0){
        metroRail();
    }




    glFlush();
}

void update(int a)//object_id : update1
{
    //auto animation
    rotorAngle -= 8.0f;
    cloud_right += 0.005;
    //car up
    if(car_right_key==1){

        car_right += 0.02;
    }
    //car down
    if(car_left_key==1){

        car_left -= 0.02;
    }
    //baloon
    if(baloon_left_key==1){

        baloon_left -= 0.002;
    }
    //metro rail
    if(rail_left_key==1){

        rail_left -= 0.05;
    }





    if (cloud_right >= 1.5) {
        cloud_right = -1.5;
    }
     if (car_right >= 1.5) {
        car_right = -1.5;
    }
    if (car_left <= -1.5) {
        car_left = +1.5;
    }
    if (baloon_left <= -1.5) {
        baloon_left = +1.5;
    }

    if (rail_left <= -1.5) {
        rail_left = +1.5;
    }
    if (rotorAngle <= -360.0f) {
        rotorAngle += 360.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

void handleKeypress(unsigned char key, int x, int y)//object_id : Keypress
{
    switch(key) {
        case 'a': car_right_key = 1; break;
        case 's': car_right_key = 0; break;
        case 'd': car_left_key = 1; break;
        case 'f': car_left_key = 0; break;
        case 'g': baloon_left_key = 1; break;
        case 'h': baloon_left_key = 0; break;
    }
    glutPostRedisplay();
}
void handleMouse(int button, int state, int x, int y)//object_id : Mouse
{

    if (state == GLUT_DOWN) {


        if (button == GLUT_LEFT_BUTTON) {
            rail_left_key=0;
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            rail_left_key=1;

        }

        glutPostRedisplay();
    }
}
int main(int argc, char** argv)//object_id : main1
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutCreateWindow("GeoGebra Drawing");
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}