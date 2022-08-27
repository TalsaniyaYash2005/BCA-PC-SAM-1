#include<stdio.h>

void main()
{
    int a, b;
    char c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("what you want to do addition [+], substracten [-], multiplication [*] and division [/] : \n");
    scanf("%s", &c);
    if (c == '/') {
        printf("division of %d and %d is %d", a, b , a / b);
    } 
    if (c == '*') {
        printf("division of %d and %d is %d", a, b , a  * b);
    } 
    if (c == '-') {
        printf("substracten of %d and %d is %d", a, b , a - b);
    } 
    if (c == '+') {
        printf("addition of %d and %d is %d", a, b , a + b);
    } 
       
}
