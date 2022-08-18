#include<stdio.h>

void main() {
    int a, b, c, d;
    printf("enter value 1");
    scanf("%d", &a);
    printf("enter value 2");
    scanf("%d", &b);
    printf("enter value 3");
    scanf("%d", &c);
    printf("enter value 4");
    scanf("%d", &d);

    int ans1, ans2, ans3, ans4;
    ans1 = ( a + b ) * c / d;
    ans2 = ((a + b) * c) / d;
    ans3 = (a + b) * (c / d);
    ans4 = a + (b * c) / d;

    printf("answer of (a + b) * c / d is %d \n", ans1);
    printf("answer of ((a + b) * c) / d is %d \n", ans2);
    printf("answer of (a + b) * (c / d) is %d \n", ans3);
    printf("answer of a + (b * c) / d is %d \n", ans4);
    
}