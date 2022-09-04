#include<stdio.h>

void main()
{
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    
    if (a > b) {
        if (a > c) {
            printf("%d is bigger then %d and %d", a, b, c);
        }    
    } 
    if (b > a ) {
        if (b > a) {
            printf("%d is bigger then %d and %d", b, a, c);
        }
        
    } 
    if (c > a) {
        if (c > b) {
            printf("%d is bigger then %d and %d", c, b, a);
        }    
    }
    
}
