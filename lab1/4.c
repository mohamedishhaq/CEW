/*4.Write a program in C to convert a decimal number to a binary number using functions.
*/

#include <stdio.h>

void dectobin(int number){
  if (number>0){
    dectobin(number/2);
    printf("%d",number%2);
  }
}


int main(){
    
    int dec_num;

    printf("Enter a Decimal Number: ");
    scanf("%d",&dec_num);

    if(dec_num<0){
      printf("No negative numbers!");
    }
    
    printf("Binary form:");
    if(dec_num == 0){
      printf("0");
    }else{
      dectobin(dec_num);
    }

  return 0 ;
}



