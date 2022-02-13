/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
// function main begins program execution 
int main() {
  
  /* variable definition */
  int n, count, sum = 0;

  /* User Enter a Number */
  printf ("Enter a number : ");
  scanf ("%d", &n);

  /* for loop execution */
  for (count = 1; count <= n; count++)
  {

    sum += count;

  }// End for loop execution

  /* Display The the sum of the numbers from 1 to n */
  printf("Total of the numbers = %d", sum);

  return 0;

}//end of function main

