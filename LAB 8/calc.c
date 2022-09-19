#include<stdio.h>
void main() {

    float val1, val2;
    char opration;
    printf("enter first number: ");
    scanf("%f", &val1);
    printf("enter second number: ");
    scanf("%f", &val2);
    printf("what you want to do addition [+], substracten [-], multiplication [*] or division [/] : \n");
    scanf("%s", &opration);

    switch (opration) {
    case '+':
        printf("addition of %f and %f is %f", val1, val2 , val1 + val2);
        break;
    
    case '-':
        printf("substracten of %f and %f is %f", val1, val2 , val1 - val2);  
        break;

    case '*':
        printf("multiplication of %f and %f is %f", val1, val2 , val1  * val2);
        break;

    case '/':
        printf("division of %f and %f is %f", val1, val2 , val1 / val2);
        break;
    default:
        printf("pls enter valid choice");
        break;
    }
}