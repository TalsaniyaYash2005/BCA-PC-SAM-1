#include <stdio.h>

void main() {
    float mark1, mark2, mark3, mark4, mark5;
    printf("enter marks of subject 1: ");
    scanf("%f", &mark1);
    printf("enter marks of subject 2: ");
    scanf("%f", &mark2);
    printf("enter marks of subject 3: ");
    scanf("%f", &mark3);
    printf("enter marks of subject 4: ");
    scanf("%f", &mark4);
    printf("enter marks of subject 5: ");
    scanf("%f", &mark5);
    printf("\n\n\n");
    // printf("Your percentage is %f \n ",((a + b + c + d + e) * 100) / 500);

    /*
    Fail below 35, Pass Class between 35 to 45, Second Class between 45 to 60, First Class between 60 to 70, Distinction if more than 70

    */
    float percentage = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;

    if (percentage < 35) {
        printf("student failed. percentage is %f", percentage);
    } else if (percentage >= 35 || percentage < 45) {
        printf("student is in the Pass Class. percentage is %f", percentage);
    } else if (percentage >= 45 || percentage < 60) {
        printf("student is in the Second Class. percentage is %f", percentage);
    } else if (percentage >= 60 || percentage <= 70) {
        printf("student is in the First Class. percentage is %f", percentage);
    } else {
        // Distinction idk what that mean
    }

}