#include<stdio.h>
void main() {

    int monthNo;
    printf("enter Month in number: ");
    scanf("%d", &monthNo);

    switch (monthNo) {
    case 1:
        printf("31 days");
        break;
    
    case 2:
        printf("28 days");
        break;

    case 3:
        printf("31 days");
        break;

    case 4:
        printf("30 days");
        break;

    case 5:
        printf("31 days");
        break;
    
    case 6:
        printf("30 days");
        break;

    case 7:
        printf("31 days");
        break;
    
    case 8:
        printf("31 days");
        break;

    case 9:
        printf("30 days");
        break;

    case 10:
        printf("31 days");
        break;

    case 11:
        printf("30 days");
        break;
    
    case 12:
        printf("31 days");
        break;
    default:
        printf("pls enter between 1 to 12");
        break;
    }
}