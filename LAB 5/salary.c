#include<stdio.h>

void main()
{
    int sal;
    printf("enter your salary: ");
    scanf("%d", &sal);

     if (sal >= 30000) {
        int da = ( sal * 95 ) / 100; 
        int hra = ( sal * 30 ) / 100;

        printf("your gross salary is %d ", sal + hra + da);
        return;
    }

     if (sal >= 20000) {
        int da = ( sal * 90 ) / 100; 
        int hra = ( sal * 25 ) / 100;

        printf("your gross salary is %d ", sal + hra + da);
        return;
    }
    
    if (sal >= 10000) {
        int da = ( sal * 80 ) / 100; 
        int hra = ( sal * 20 ) / 100;

        printf("your gross salary is %d ", sal + hra + da);
        return;
    }
    
    
}
