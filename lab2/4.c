/*4.Write a C program to read a sentence and replace lowercase characters with uppercase and vice 
versa.
*/

#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
  char str[100];
  printf("Enter the string: ");
  scanf("%s", &str);
  
  for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
            str[i]=tolower(str[i]);
        else if(islower(str[i]))
            str[i]=toupper(str[i]);
        else
            str[i] = str[i];
    }

    printf("%s",str);   

  return 0;

}