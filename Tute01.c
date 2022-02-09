/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

  int mark_1,mark_2,total;

  float Average;

  printf("Enter the mark 1 :");
  scanf("%d",&mark_1);

  printf("Enter the mark 2 :");
  scanf("%d",&mark_2);

  total = mark_1 + mark_2;
  Average = total / 2.0 ;
  
  printf("Average  is -->: %.2f",Average);
  
  return 0;
}

