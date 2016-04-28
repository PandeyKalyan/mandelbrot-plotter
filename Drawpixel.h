#ifndef DRAWPIXEL_H_INCLUDED
#define DRAWPIXEL_H_INCLUDED
#include<GL/glut.h>
#include<GL/gl.h>

const int width=1225;
const int height=700;

void init(void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
}
void changeSize(int w, int h) {

   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluOrtho2D (0.0, (GLdouble) width, 0.0, (GLdouble) height);
}

void drawpixel(int x,int y,float r,float g,float b )
{
    glColor3f(r,g,b);
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}
void display();

void windowdraw(int x,int y)
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(x,y);
    glutCreateWindow("Mandelbrot Fractal");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(changeSize);
    glutMainLoop();

}


#endif // DRAWPIXEL_H_INCLUDED
