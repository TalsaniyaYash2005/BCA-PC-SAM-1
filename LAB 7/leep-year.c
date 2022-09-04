#include <stdio.h>

void main() {
    int year;
    
    printf("enter year: ");
    scanf("%d", &year);
    /*
     If a year can be divisible by 4
    but not divisible by 100 then it is leap year 
    but if it is divisible by 400 then it is leap year
    */
   if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   } else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   } else if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   } else {
      printf("%d is not a leap year.", year);
   }
    
}