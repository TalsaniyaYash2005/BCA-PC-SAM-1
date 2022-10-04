#include<stdio.h>
void main() {
    int n1, n2;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);
    printf("prime number is ");
    for (int i2 = n1; i2 <= n2; i2++) {
        int i, total = 0;
        int num = i2;

        for(i = 1; i <= num / 2; i++) {

            if(num % i == 0 && (i != 1 && i != num)) {            

                total = total + 1;
                i++;
                
            }
        }
        (total == 0) ? printf("%d ", num) : printf("");
    }

}
