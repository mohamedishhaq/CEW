/*5. Write a C program to print all unique elements in an array*/

#include <stdio.h>

int main()
{
    int arr[10] = {5,4,1,5,5,4,6,7,5,2};
    int unique ;
    for (int i = 0; i < 10; i++){
        unique = 0;
        for (int j = 0; j < 10; j++){
            if (arr[i]==arr[j]){
                unique++;                
            }
        }
        if (unique==1)
        {
            printf("%d ",arr[i]);
        }        
    }   
    return 0;
}