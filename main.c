#include <stdio.h>

int main()  {
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f" ,&x); // scans for number
    y = (x+1)/(x-5);
    printf("y: %f\n", y);
    return 0;
}
