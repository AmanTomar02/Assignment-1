#include <stdio.h>
#include <conio.h>
#define pi 3.14
int main()
{
    int radius;
    float area;
    printf("enter radius");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("%.02f", area);
    return 0;
}