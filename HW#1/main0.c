#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 10;
    int num = 0;
    scanf("%d",&num);
    if(num&(num-1))
        printf("%d is false",num);
    else
        printf("%d is true\n",num);

    return 0;
}
