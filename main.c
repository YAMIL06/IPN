#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{


  double sx0 = 0, sx1 = 0, sx2 = 0, sx3 = 0, sx4 = 0, sxy0 = 0, sxy1 = 0, sxy2 = 0;
  double a0, a1, a2, b0, b1, b2, c0, c1, c2, k0, k1, k2, d, d1, d2, d3, x1, x2, x3;
  int i;
  double x[30],y[30];




    x[0] = 20;    y[0] = 40;
    x[1] = -10;   y[1] = 20;
    x[2] = 7;     y[2] = 34;
    x[3] = 57;    y[3] = 32;
    x[4] = 70;    y[4] = 8;
    x[5] = 84;    y[5] = -14;
    x[6] = 98;    y[6] = -36;
    x[7] = 46;    y[7] = 36;
    x[8] = 28;    y[8] = 38;
    x[9] = -11;   y[9] = 4;
    x[10] = -20;  y[10] = -15;
    x[11] = -24;  y[11] = -36;
    x[12] = 5;    y[12] = 27;
    x[13] = 46;   y[13] = 23;
    x[14] = 62;   y[14] = 5;
    x[15] = 68;   y[15] = 28;
    x[16] = 24;   y[16] = 54;
    x[17] = 7;    y[17] = 46;
    x[18] = 15;   y[18] = 24;
    x[19] = -5;   y[19] = 5;
    x[20] = -14;  y[20] = -18;
    x[21] = -14;  y[21] = -30;
    x[22] = 4;    y[22] = 8;
    x[23] = 37;   y[23] = 40;
    x[24] = 54;   y[24] = -4;
    x[25] = 66;   y[25] = -18;
    x[26] = 85;   y[26] = -31;
    x[27] = 72;   y[27] = -3;
    x[28] = 81;   y[28] = 14;
    x[29] = 61;   y[29] = 23;



    for (i = 0; i < 30 ; i++){
        sx0 += 1;
        sx1 += pow(x[i],1);
        sx2 += pow(x[i],2);
        sx3 += pow(x[i],3);
        sx4 += pow(x[i],4);
        sxy0 += 1 * (y[i]);
        sxy1 += (x[i] * y[i]);
        sxy2 += pow(x[i],2) * (y[i]);
    }

        a0 = sx0;   b0 = sx1;   c0 = sx2;   k0 = sxy0;
        a1 = sx1;   b1 = sx2;   c1 = sx3;   k1 = sxy1;
        a2 = sx2;   b2 = sx3;   c2 = sx4;   k2 = sxy2;


        d = a0 * b1 * c2 + a1 * b2 * c0 + a2 * b0 * c1 - a2 * b1 * c0 - a1 * b0 * c2 - a0 * b2 *c1;

        d1 = k0 * b1 * c2 + a1 * b2 * k2 + a2 * k1 * c1 - a2 * b1 * k2 - a1 * k1 * c2 - k0 * b2 * c1;

        d2 =  a0 * k1 * c2 + k0 * b2 * c0 + a2 * b0 * k2 - a2 * k1 * c0 - k0 * b0 * c2 - a0 * b2 * k2;

        d3 = a0 * b1 * k2 + a1 * k1 * c0 + k0 * b0 * c1 - k0 * b1 * c0 - a1 * b0 * k2 -a0 * k1 * c1;

        a0 = d1/d;
        a1 = d2/d;
        a2 = d3/d;

    printf("|   x  |   y  |\n--------------- \n", x[i], y[i]);

    for(i = 0; i < 30; i++){

        printf("|%5.0lf | %5.0lf|\n---------------\n", x[i], y[i]);

    }
    printf("\n\Siistema de ecuaciones: \n\n");
    printf("(%5.0lf)a0 + (%5.0lf)a1 + (%5.0lf)a2 = (%5.0lf)k0  \n\n", sx0,sx1,sx2,sxy0);
    printf("(%5.0lf)a0 + (%5.0lf)a1 + (%5.0lf)a2 = (%5.0lf)k0  \n\n", sx1,sx2,sx3,sxy1);
    printf("(%5.0lf)a0 + (%5.0lf)a1 + (%5.0lf)a2 = (%5.0lf)k0  \n\n", sx2,sx3,sx4,sxy2);

    printf("\n\nEl polinomio de ajuste es: (%lf)x^2 + (%lf)x + (%lf) \n\n", a2,a1,a0);



    return 0;
}




