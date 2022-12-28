#include <stdio.h>

int main()
{
   int n = 7;
   int i,j;
   for (i = 1;i <= n;i++)
   {
        for (j = n - 1 - i; j >= 0; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
   }
   return 0;
}
