#include<stdio.h>
int main()
{
    int row;
    printf("Enter the rows:");
    scanf("%d",&row);
    for(int i=row;i>=1;i--)
    {
        for(int j=0;j<row-i;j++)
        {
            printf(" ");
        }
        for(int k=2*i-1;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Enter the rows:5
// *********
//  *******
//   *****
//    ***
//     *