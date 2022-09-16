#include<stdio.h>
void main()
{
    int a, b;
    char c;
    printf("enter your choice \n[+] for positive, [-] for negitive, [0] for zero: ");
    scanf("%c", &c);
    printf("enter the number: ");
    scanf("%d", &a);


    switch (c)
    {
    case '+':  
        if (a > 0) {
            printf("you entered valid number");
        } else {
            printf("enter number is not as per choice");
        }
        
        break;
    case '-':
        if (a < 0) {
            printf("you entered valid number");
        } else {
            printf("enter number is not as per choice");
        }
        
        break;
    case '0': 
        if (a == 0) {
            printf("you entered valid number");
        } else {
            printf("enter number is not as per choice");
        }
        break;
    default:
        printf("choice is invalid");
        break;
    }
}
