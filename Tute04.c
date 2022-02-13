/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
// function main begins program execution 
int main() {

  /* local variable definition */
   int no1, no2;

   /* User Enter the Value for Num 1 */ 
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   /* User Enter the Value for Num 2 */ 
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

  printf ("\n"); //For New Line

  printf("%d ", minimum(no1, no2));  //Display the minimum Value
  printf("%d ", maximum(no1, no2));  //Display the maximum Value
  printf("%d ", multiply(no1, no2)); //Display the multiply Value

   return 0;

}//end of function main

// function minimum begins
int minimum (int no1, int no2)
{

  return (no1 > no2 ) ? no2 : no1;
	
}//end of function minimum

// function maximum begins
int maximum (int no1, int no2)
{

  return (no1 > no2 ) ? no1 : no2;
	
}//end of function maximum

// function multiply begins
int multiply (int no1, int no2)
{
	
	int multiply = no1 * no2;
	
	return multiply;
	
}//end of function multiply

