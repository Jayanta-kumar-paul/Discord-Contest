#include <stdio.h>
int main()
{
    int num = 5;
    for (int i = 0; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf("*");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int l = 0; l < i; l++)
        {
            printf(" ");
        }
        for (int m = num; m >= i; m--)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1; i <= num + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = num; k >= i; k--)
        {
            printf(" ");
        }
        for (int l = num; l >= i; l--)
        {
            printf(" ");
        }
        for (int m = 1; m <= i; m++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************