#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
    char input[1000] = "";
    char* buffer;

    //Программа не закончится, пока пользователь не введёт "exit"
    {
        scanf("%[^\n]s", input);
        if (strcmp(input, "exit"))
            == 1;
        buffer = strtok(input, " .,()");

        if (_strcmpi(buffer, "circle") == 0) // Если пользователь ввёл "circle"
        {
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
                continue;
            }
            perimeter = 2 * R * 3.1415926536;
            area = R * R * 3.1415926536;
            printf("perimeter=%f\narea=%f\n\n", perimeter, area);
        }
        else if (_strcmpi(buffer, "triangle") == 0) //Если пользователь введёл "triangle"
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

        else {
            printf("Error. Expected \"triangle\" or \"circle\".\n\n");
            getchar();
            continue;
        }
        getchar();
    }
    getchar();
    return 0;
}
