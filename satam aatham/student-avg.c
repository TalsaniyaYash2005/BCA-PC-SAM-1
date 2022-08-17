#include<stdio.h>

void main() {
    int student1_1, student1_2, student1_3, student2_1, student2_2, student2_3;
    printf("enter marks of student 1 Ravi \n");
    printf("marks1: ");
    scanf("%d", &student1_1);
    printf("marks2: ");
    scanf("%d", &student1_2);
    printf("marks3: ");
    scanf("%d", &student1_3);

    printf("enter marks of student 2 Sanjay \n");
    printf("marks1: ");
    scanf("%d", &student2_1);
    printf("marks2: ");
    scanf("%d", &student2_2);
    printf("marks3: ");
    scanf("%d", &student2_3);

    int total1, total2, avg1, avg2;
    total1 = student1_1 + student1_2 + student1_3;
    avg1 = total1 / 3;
    total2 = student2_1 + student2_2 + student2_3;
    avg2 = total2 / 3;

    printf("name\t|\tmark1\t|\tmark2\t|\tmark3\t|\ttotal\t|\tAverage \n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("Ravi\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\n", student1_1, student1_2, student1_3, total1, avg1);
    printf("Sanjay\t|\t%d\t|\t%d\t|\t%d\t|\t%d\t|\t%d\n", student2_1, student2_2, student2_3, total2, avg2);
    
}