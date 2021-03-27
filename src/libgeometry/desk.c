#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

void Circle()
{
    char* buffer;
    float x, y, R, perimeter, area;
    buffer = strtok(NULL, " ,()");
    x = atof(buffer);
    buffer = strtok(NULL, " ,()");
    y = atof(buffer);
    buffer = strtok(NULL, " ,()");
    R = atof(buffer);
    if (R <= 0) {
        printf("Error. Radius must be positiv.\n\n"); //Проверка радиуса
        getchar();
    }
    perimeter = 2 * R * 3.1415926536;
    area = R * R * 3.1415926536;
    printf("perimeter=%f\narea=%f\n\n", perimeter, area);
    delete buffer;
}
