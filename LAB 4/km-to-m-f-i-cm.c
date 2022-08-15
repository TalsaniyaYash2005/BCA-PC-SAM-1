#include <stdio.h>

void main()
{ 
    int km;
    printf("enter distance in kilometers: ");
    scanf("%d", &km);
    printf("meter is %d \n",km * 1000);
    printf("feet is %d \n",km * 3281);
    printf("inches is %d \n",km * 39370);
    printf("centimeters is %d \n",km * 100 * 1000);
}
