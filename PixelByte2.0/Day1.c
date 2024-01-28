// WAP in c to print following pattern://
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the range :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
// Enter the range :4
// 1111
// 2222
// 3333
// 4444