
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
char input[1000]="";
int k = 0;
char* buffer;
bool isRight = true;
while (strcmp(input, "exit"))
{
scanf("%[^\n]s", input);

buffer = strtok(input," .,()");
if (_strcmpi(buffer, "circle") == 0)
{
float x, y, R, P, S; 
buffer = strtok(NULL, " ,()");
x = atof(buffer);
buffer = strtok(NULL, " ,()");
y = atof(buffer);
buffer = strtok(NULL, " ,()");
R = atof(buffer);
if (R <= 0)
{
printf("Error. Radius must be positiv.\n");
getchar();
continue;
}
P = 2 * R * 3.1415926536;
S = R * R * 3.1415926536;
printf("P=%f\nS=%f", P, S);
}
else if (_strcmpi(buffer, "triangle") == 0)
{
float x[4], y[4];
for (int i = 0; i < 4; i++)
{
buffer = strtok(NULL, " ,()");
x[i] = atof(buffer);
buffer = strtok(NULL, " ,()");
y[i] = atof(buffer);
}
float P, S,a,b,c;
a = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
b = sqrt((x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]));
c = sqrt((x[2] - x[1]) * (x[2] - x[1]) + (y[2] - y[1]) * (y[2] - y[1]));
P = a + b + c;
S = sqrt(P/2*(P/2-a)*(P/2-c)*(P/2 - b));
printf("P=%f\nS=%f\n",P,S);
}
/*else if (_strcmpi(buffer, "polygon") == 0)
{
;
}*/
else
{
printf("Error. Expected \"triangle\" or \"circle\".");
getchar();
continue;
}
getchar();
}
getchar();
return 0;
}
