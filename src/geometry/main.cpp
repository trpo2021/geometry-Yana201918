#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <libgeometry/circle.h>
#include <libgeometry/triangle.h>

int main()
{
    char input[1000] = "";
    int k = 0;
    char* buffer;
    while (strcmp(input, "exit")) {
        scanf("%[^\n]s", input);
        
        if (_strcmpi(buffer, "circle") == 0) {
            Circle();
        }
        else if (_strcmpi(buffer, "triangle") == 0) {
          Triangle();
        }

        else {
            printf("Error. Expected \"triangle\" or \"circle\".");
            getchar();
            continue;
        }
        getchar();
    }
    getchar();
    return 0;
}
