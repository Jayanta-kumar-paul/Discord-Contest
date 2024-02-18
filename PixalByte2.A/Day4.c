// // C Program to print the hourglass pattern using numbers
// #include <stdio.h>

// int main()
// {

//     int n = 5;
//     // first outer loop to iterate through each row

//     for (int i = 0; i < n ; i++)
//     {

//         // assigning comparator

//         int comp;

//         if (i < n)
//         {

//             comp = i + 1;
//         }

//         else
//         {

//             comp = (n - i) - 3;
//         }

//         // first inner loop to print leading whitespaces

//         for (int j = 0; j < comp; j++)
//         {

//             printf(" ");
//         }

//         // second inner loop to print number and inner

//         // whitespaces

//         for (int k = 0; k < n - comp; k++)
//         {

//             if (k == 0 || k == n - comp - 1 || i == 0 || i == n - 2)
//             {

//                 printf("%d ", k + 1);
//             }

//             else
//             {

//                 printf("  ");
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int rows, i, j, k;

    printf("Enter Hollow Sandglass Star Pattern Rows = ");
    scanf("%d", &rows);

    printf("Printing Hollow Sandglass Star Pattern\n");

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= rows; k++)
        {
            if (i == 1 || k == i || k == rows)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= rows; k++)
        {
            if (i == 1 || k == i || k == rows)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}