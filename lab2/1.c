/*1.Write a C program to display the first n odd natural numbers and their sum using for, while and 
do-while loop.*/


#include <stdio.h>

int main(){
  
  int n,a=1,sum=0;
  printf("Enter a Number:");
  scanf("%d",&n);

  printf("Odd Numbers:\n1\n");

  do{
    a+=2;
    sum+=a;
    printf("%d\n",a);
  }while(a<(n-1));

  printf("Sum=%d",sum);
}