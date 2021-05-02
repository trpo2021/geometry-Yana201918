#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <libgeometry/circle.h>
#include <libgeometry/triangle.h>

void Triangle()
{
   float x[4], y[4];
            for (int i = 0; i < 4; i++) {
                buffer = strtok(NULL, " ,()");
                x[i] = atof(buffer);
                buffer = strtok(NULL, " ,()");
                y[i] = atof(buffer);
            }
            float perimeter, area, a, b, c;
            a = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
            b = sqrt((x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]));
            c = sqrt((x[2] - x[1]) * (x[2] - x[1]) + (y[2] - y[1]) * (y[2] - y[1]));
            perimeter = a + b + c;
            float p = perimeter / 2;
            area = sqrt(p * (p - a) * (p - c) * (p - b));
            printf("perimeter=%f\narea=%f\n\n", perimeter, area);
}
