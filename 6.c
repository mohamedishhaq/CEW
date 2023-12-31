/*6.Write a C program to add two distances in inch-feet system using structures.*/

#include <stdio.h>

struct Distance {
    int ft;
    int inch;
};

int main(){
    struct Distance d1, d2;
    printf("Enter the ft,inch of 1st distance: ");
    scanf("%d %d", &d1.ft, &d1.inch);

    printf("Enter the ft,inch of 2nd distance: ");
    scanf("%d %d", &d2.ft, &d2.inch);

    printf("The total distance is: %dft,%d inch\n", d1.ft+d2.ft, d1.inch+d2.inch);

    return 0;
}
