Programiz

Search Programiz
C Program to Check Leap Year
C Program to Check Leap Year
In this example, you will learn to check whether the year entered by the user is a leap year or not.
To understand this example, you should have the knowledge of the following C programming topics:

C Programming Operators
C if...else Statement
A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

For example,

1999 is not a leap year
2000 is a leap year
2004 is a leap year
Program to Check Leap Year
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly visible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap year
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
