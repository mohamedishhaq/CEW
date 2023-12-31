/*2.Write a C program to make the following pattern as a pyramid with an asterisk*/

#include <stdio.h>

int main(){
  int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    int space=rows;
    for (int i=1 ;i<=rows; i++){
      for(int j=space ; j>=0;j--){
        printf(" ");
      }
      
      for (int a=1;a<=i;a++){
        printf("* ");
      }
      printf("\n");
      space--;
    }
  return 0;
}