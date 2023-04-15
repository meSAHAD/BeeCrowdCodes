
#include <stdio.h>/*printf,scanf definitions */
/* This function find square of a number*/
int find_square_number(int num)
{
    return num*num;
}
int main()
{
    int num;
    /* Get the number input*/
    printf("Enter the Number:");
    scanf("%d", &num);
    /*Call Function find_square_number with one Parameters*/
    int square_of_number=find_square_number(num);
    /* Display the square of a number*/
    printf("Square of Given Number is: %d",square_of_number);

}
