#ifndef MANDELBROT_H_INCLUDED
#define MANDELBROT_H_INCLUDED
#include "Complex.h"
#include "Drawpixel.h"

const int max_iterations=100;

float colorarray[500][3];


void mandelbrot()
{

      colorarray[0][0]=66;
      colorarray[0][1]=30;
      colorarray[0][2]=15;

      colorarray[1][0]=25;
      colorarray[1][1]=7;
      colorarray[1][2]=26;

      colorarray[2][0]=9;
      colorarray[2][1]=1;
      colorarray[2][2]=47;

      colorarray[3][0]=4;
      colorarray[3][1]=4;
      colorarray[3][2]=73;

      colorarray[4][0]=0;
      colorarray[4][1]=7;
      colorarray[4][2]=100;

      colorarray[5][0]=12;
      colorarray[5][1]=44;
      colorarray[5][2]=138;

      colorarray[6][0]=24;
      colorarray[6][1]=82;
      colorarray[6][2]=177;

      colorarray[7][0]=57;
      colorarray[7][1]=125;
      colorarray[7][2]=209;

      colorarray[8][0]=134;
      colorarray[8][1]=181;
      colorarray[8][2]=229;

      colorarray[9][0]=211;
      colorarray[9][1]=236;
      colorarray[9][2]=248;

      colorarray[10][0]=241;
      colorarray[10][1]=233;
      colorarray[10][2]=191;

      colorarray[11][0]=248;
      colorarray[11][1]=201;
      colorarray[11][2]=95;

      colorarray[12][0]=255;
      colorarray[12][1]=170;
      colorarray[12][2]=0;

      colorarray[13][0]=204;
      colorarray[13][1]=128;
      colorarray[13][2]=0;

      colorarray[14][0]=153;
      colorarray[14][1]=87;
      colorarray[14][2]=0;

      colorarray[15][0]=106;
      colorarray[15][1]=52;
      colorarray[15][2]=3;





    for(int i=0;i<width;i++)
    {
        for(int j=0;j<height;j++)
        {
            int iterations=0;
            float x=3.5*i/width-2.5;
            float y=static_cast<float>(2*j)/height-1.0;
            Complex z,c(x,y);

            while(z.magnitude()<2 && iterations<max_iterations)
            {
                z=z*z+c;
                iterations++;
            }
            float r,g,b;
            if(iterations!=max_iterations)
            {
             r=colorarray[iterations%16][0]/255;
             g=colorarray[iterations%16][1]/255;
             b=colorarray[iterations%16][2]/255;
            }
            else
            {
             r=0;
             g=0;
             b=0;
            }
            drawpixel(i,j,r,g,b);

        }
    }

}



#endif // MANDELBROT_H_INCLUDED
