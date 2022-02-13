/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
// function main begins program execution 
int main() {
  
  /* variable definition */
  float distance, amount;
  
  /* User Enter the Distance the vehicle has travelled */
  printf ("Enter the Distance the vehicle has travelled (km) : ");
  scanf ("%f", &distance);

  /* if selection execution */
  if (distance <= 30)
  {

    amount = distance * 50;

  }else
  {

    amount = (30 * 50) + (distance - 30) * 40;

  }// End if selection execution

  printf ("\n"); // For New Line

  /* Display the amount to be paid for a rented vehicle */
  printf ("The amount to be paid for a rented vehicle is %.2f", amount);

  return 0;
  
}//end of function main
