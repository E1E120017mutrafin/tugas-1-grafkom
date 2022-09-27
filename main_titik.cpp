#include <iostream>
#include <Gl/glut.h>
#include <stdio.h>
void titik();
main(int argc, char** argv)
{
                glutInit(&argc,argv);
                glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
                glutInitWindowSize(600,800);
                glutInitWindowPosition(100,100);
                glutCreateWindow("Percobaan 1");
                glClearColor(0.0,0.0,0.0,0.0); //warna latar belakang/ 4 komponen warna yaitu RGB, dan alpha
                glMatrixMode(GL_PROJECTION);
                //glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
                glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
                glutDisplayFunc(titik);
                glutMainLoop();
}
void titik()
{
                glClear(GL_COLOR_BUFFER_BIT);//membersihkan semua piksel
                glPointSize(5.5);
                glBegin(GL_POINTS);
                glColor3f(1.1,1.2,-1.1);
                glVertex2f(-0.5,0.25);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(-0.25,0.5);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(0.0,0.3);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(-0.4,-0.12);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(-0.10,-0.09);
                glColor3f(1.0,1.0,1.0);
                glVertex2f(-0.5,-0.18);

                glEnd();
                glFlush();
}
