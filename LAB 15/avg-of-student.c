#include <stdio.h>

void main() {
    int student = 2, sub = 3;

    // printf("enter how many student data you have: ");
    // scanf("%d", &student);
    // printf("enter how many subject you have: ");
    // scanf("%d", &sub);

    int marks[student][sub];
    int avg[student], tempavg = 0;


    // reading marks of 5 student and 3 subject using 2D array
    for (int i = 0; i < student; i++) {
        for (int j = 0; j < sub; j++) {
            printf("enter %d student's %d mark : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < student; i++) {
        for (int j = 0; j < sub; j++) {
            tempavg = tempavg + marks[i][j];
        }
        avg[i] = tempavg / sub;
        printf("%d student's average is : %d\n", i + 1, avg[i]);
        tempavg = 0;
    }

    // for (int i = 0; i < student; i++) {
    //     for (int j = 0; j < sub; j++) {
    //         tempavg = tempavg + marks[i][j];
    //     }
    // }
    // printf("average of all student is : %d", tempavg / (student * sub));

    for (int i = 0; i < student; i++) {
        tempavg = tempavg + avg[i];
    }
    printf("average of all student is : %d", tempavg / student);
    

}