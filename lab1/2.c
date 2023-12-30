/*2.Write a C program that takes the height and width of a rectangle as an input from user 
and compute the perimeter and area of a rectangle.
*/

#include <stdio.h>

int main(){
  
  int height;
  int width;
  
  printf("Enter the Height and Width of rectangle in cm:");
  scanf("%d%d",&height,&width);

  printf("Perimeter: %dcm\n",2*(height+width));
  printf("Area: %d sq.cm",(height*width));

  return 0;
}