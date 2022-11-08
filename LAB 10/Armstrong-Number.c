#include<stdio.h>

// abcd... = an + bn + cn + dn + ...

// 153 = 1*1*1 + 5*5*5 + 3*3*3  // 153 is an Armstrong number.

// 1234 = 1*1*1*1 + 2*2*2*2 + 3*3*3*3 + 4*4*4*4 

// if num and sum is equl then its armstrong number


void main() {
    int num, sum = 00, temp, totalDigit = 0, i = 0;
    int arr[100];
    printf("enter any number ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        arr[i] = temp % 10;
        i++;
        temp = temp / 10;
        totalDigit ++;
    }
    int index, power;

    for (int i = totalDigit - 1; i > -1; i--)
    {
        power = 1 , index = 0;
        do {
        index++;
        power = power * arr[i];
        } while (index < totalDigit);
        
        sum = sum + power;
    }
    
    (sum == num) ? printf("enter number is armstrong number") : printf("enter number is not armstrong number");
}


