#include <stdio.h>

void main()
{ 
    float a, b, c, d, e;
    printf("enter marks of subject 1: ");
    scanf("%f", &a);
    printf("enter marks of subject 2: ");
    scanf("%f", &b);
    printf("enter marks of subject 3: ");
    scanf("%f", &c);
    printf("enter marks of subject 4: ");
    scanf("%f", &c);
    printf("enter marks of subject 5: ");
    scanf("%f", &c);
    printf("Your percentage is %f \n ",((a + b + c + d + e) * 100) / 500);
}

//  formula
// if 500 = 100 (100 marks each suubject * 5 = 500)
// then total of all sub = ?

// total * 100
// -----------
//     500