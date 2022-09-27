#include<stdio.h>


// a b c d == d c b a 
// 2002 == 2002
// but
// 2001 != 1002

void main() {
    int number, number2, newnum = 0;
    printf("enter number : ");
    scanf("%d", &number2);
    number = number2;

    int i = 0;
    
    while (number != 0) {

        i++;
        newnum = newnum * 10;
        newnum = newnum + (number % 10);

        number = number / 10;
        
    }

    (number2 == newnum) ? printf("%d == %d so enter number is palindrome number", number2, newnum) : printf("%d != %d so enter number is not palindrome number", number2, newnum);
    // printf("\n number2 = %d \n newnum = %d", number2, newnum);

}


