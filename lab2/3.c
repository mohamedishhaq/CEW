/*3.Write a C program to compare two strings without using string library functions*/


#include <stdio.h>
int main(){
  char str1[] = "default", str2[] = "default";
  
  printf("Enter the string1: ");
  scanf("%s", &str1);
  printf("Enter the string2: ");
  scanf("%s", &str2);

  int equal= 1;

  for (int i=0; str1[i]!='\0' || str1[i]!='\0';i++){
    if (str1[i]!=str2[i]){
      equal=0;
      break;
    }

  }
  if (equal){
    printf("strings are Equal");
  }
  else{
    printf("strings are Not equal");
  }
  return 0;

}
