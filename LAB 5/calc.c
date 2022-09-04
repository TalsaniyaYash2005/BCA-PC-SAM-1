#include<stdio.h>

void main()
{
    float a, b;
    char c;
    printf("enter first number: ");
    scanf("%f", &a);
    printf("enter second number: ");
    scanf("%f", &b);
    printf("what you want to do addition [+], substracten [-], multiplication [*] and division [/] : \n");
    scanf("%s", &c);
    if (c == '/') {
        printf("division of %f and %f is %f", a, b , a / b);
    } 
    if (c == '*') {
        printf("division of %f and %f is %f", a, b , a  * b);
    } 
    if (c == '-') {
        printf("substracten of %f and %f is %f", a, b , a - b);
    } 
    if (c == '+') {
        printf("addition of %f and %f is %f", a, b , a + b);
    } 
       
}
