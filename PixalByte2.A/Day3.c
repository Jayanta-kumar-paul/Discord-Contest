#include<stdio.h>
int main ()
{
    int rows,p=1;
    printf("Enter a rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%3d",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}
// Enter a rows:5
//   1
//   2  3
//   4  5  6
//   7  8  9 10
//  11 12 13 14 15