/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
// function main begins program execution 
int main() {
   
  /* variable definition */
   int mark1, mark2, sum;
   float avg;
   
   printf ("Enter the Subject 1 Marks :");   //User Input First Subject Marks
   scanf ("%d", &mark1);
   
   printf ("Enter the Subject 2 Marks :");   //User Input Second Subject Marks
   scanf ("%d", &mark2);
   
   avg = (mark1 + mark2) / 2.0;  //Calculate the Average
   
   printf ("\nAverage marks of the two subject : %.2f", avg);  //Display Average Marks
  
  return 0;
   
}//end of function main