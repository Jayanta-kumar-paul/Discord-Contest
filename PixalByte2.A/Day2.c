#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter Term :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        int e = 1;
        for (int k = 1; k <= i; k++)
        {
            if (i == num || k == 1 || k == 2 * i - k)
                printf("%d ", k);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
// Enter Term :5
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5