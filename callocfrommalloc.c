#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char *val = (char *)malloc(sizeof(char)); 

    *val = 'A';                                // Assign a value to the allocated memory
    printf("Value stored at val: %c\n", *val); // Print the value

    free(val); // Free the allocated memory to avoid memory leak
