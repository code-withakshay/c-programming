#include <stdio.h>
 
int main()
{
 
    // declaring loop variables
    int i = 0, j;
    int count = 0;
 
    // outer loop starts
    do {
        j = 0;
 
        // inner loop starts
        do {
            printf("%d  ", count++);
            j++;
        } while (j < 3);
        // inner loop ends
 
        printf("\n");
        i++;
    } while (i < 3);
    // outer loop ends
 
    return 0;
}
