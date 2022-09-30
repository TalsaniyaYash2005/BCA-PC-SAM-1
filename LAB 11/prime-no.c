#include <stdio.h>
// 28 can divided by 14  7  4  2  1 
// but 7 is not devided by any number thats why 7 is prime number

// void main()
void f(int num)
{
    // int i, num, total = 0;
    int i, total = 0;
    // printf("Enter any number to check prime number: ");
    // scanf("%d", &num);
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0 && (i != 1 && i != num)) {            
            total = total + 1;
            i++;
        }
    }
    (total == 0) ? printf("%d is prime number \n", num) : printf("%d is not prime number \n", num);
}

void main() {
    int i = 0;
    while (i < 100)
    {
        i++;
        f(i);
    }
    
}