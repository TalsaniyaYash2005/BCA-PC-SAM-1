#include <stdio.h>

void main() {
    int n;
    printf("enter number of persons you want to enter: ");
    scanf("%d", &n);

    int persons[n][2], hight = 0, weight = 0;

    for (int i = 0; i < n; i++) {
        printf("enter %d person's height: ", i + 1);
        scanf("%d", &persons[i][0]);
        printf("enter %d person's weight: ", i + 1);
        scanf("%d", &persons[i][1]);

        if (persons[i][0] > 170)
            hight++;
        if (persons[i][1] < 50)
            weight++;
    }

    printf("%d persons has height greater than 170, %d persons has weight less than 50\n", hight, weight);
}