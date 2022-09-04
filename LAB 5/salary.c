#include<stdio.h>

void main()
{
    int salary;
    printf("enter your salary: ");
    scanf("%d", &salary);

    if (salary >= 10000 && salary < 20000) {
        int da = ( salary * 80 ) / 100; 
        int hra = ( salary * 20 ) / 100;

        printf("your gross salary is %d ", salary + hra + da);
    }

     if (salary >= 20000 && salary < 30000) {
        int da = ( salary * 90 ) / 100; 
        int hra = ( salary * 25 ) / 100;

        printf("your gross salary is %d ", salary + hra + da);
    }
     if (salary >= 30000) {
        int da = ( salary * 95 ) / 100; 
        int hra = ( salary * 30 ) / 100;

        printf("your gross salary is %d ", salary + hra + da);
    }
    
    
    
}
