#include<iostream>
#include<iomanip>
#include<cmath>
#include "Complex.h"
#include "Drawpixel.h"
#include "Mandelbrot.h"


void display()
{
    mandelbrot();
    glFlush();
}

int main(int argc, char **argv)
 {
     glutInit(&argc,argv);
     windowdraw(width,height);
     return 0;





 }
