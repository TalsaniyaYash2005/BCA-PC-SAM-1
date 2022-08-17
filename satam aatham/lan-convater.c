#include<stdio.h>

void main() {
    int a;
    printf("enter length in centimeter");
    scanf("%d", &a);
    int m = a * 100;
    int km = a * 100000;
    printf("%d centimeter in meter is %d", a, m);
    printf("%d centimeter in kilometer is %d", a, km);
}