#include <stdio.h>
int main()
{
   int Num;
   printf("Enter a number:");
   scanf("%d", &Num);
   for (int i = 1; i <= Num; i++)
   {
      for (int j = 1; j <= Num; j++)
      {
         if (i == 1 || i == Num || j == 1 || j == Num)
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}
// Enter a number:6
// ******
// *    *
// *    *
// *    *
// *    *
// ******