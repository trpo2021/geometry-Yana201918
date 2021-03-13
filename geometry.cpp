#include <stdio.h>
 
int main()
{
    float p = 3.14;
    float perimeter, area;
    printf("Enter the radius ");
    float R;
    scanf("%f", &R);
    perimeter = 2*p*R;
    area = p*R*R;
    printf("perimeter =%.4f ", perimeter);
    printf("area = %.4f ", area);
    return 0;
}
