#include <stdio.h>

int main()  {
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f" ,&x); // scans for number
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}
