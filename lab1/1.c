/*1.Write a C program that accepts an employee's ID, total worked hours in a month and 
the amount received per hour. Print the ID and salary (with two decimal places) of the 
employee for a particular month.*/

#include <stdio.h>

int main(){

  int employeeID;
  int Worked_hours;
  float amount_per_hour = 25.75;

  printf("Please Enter the Employee's ID Number: ");
  scanf("%d",&employeeID);

  printf("Enter total worked hours in a month: ");
  scanf("%d",&Worked_hours);
  
  printf("The amount of money employee recevied per hour: $%.2f\n",amount_per_hour);
  printf("Total amount of money employee recevied: $%.2f",Worked_hours*amount_per_hour);

  return 0;
}