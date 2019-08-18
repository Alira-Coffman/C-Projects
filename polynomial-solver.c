/*Solves a polynomial using user input*/

#include <stdio.h>
int main()
{
    int a, b, c, x;
    int solution;
    printf("This program evaluates polynomial ax^2 +bx+c\n");
    printf("Please enter values for a, b, and c. Separate each by commas (a,b,c,x) then hit enter: ");
    scanf("%d, %d, %d, %d", &a, &b, &c, &x);
    solution = ((a*x*x) + (b*x) + c);
    printf("Solution is: %d", solution);
    return 0;
}