#include <stdio.h>

void main()
{ 
    float f;
    printf("exter temperature in fahrenheits: ");
    scanf("%d", &f);
    printf("temperature in celsius is %f \n ", 1.8 * f + 32);
}
