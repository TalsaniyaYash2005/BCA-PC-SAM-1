#include<stdio.h>

void main() {
    int a, b, c, d;
    printf("enter length in centimeter");
    scanf("%d", &a);
    printf("enter length in centimeter");
    scanf("%d", &b);
    printf("enter length in centimeter");
    scanf("%d", &c);
    printf("enter length in centimeter");
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