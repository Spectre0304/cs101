#include<stdio.h>

int main() {
    int n = 12345;
    int i = n / 1000 % 10;
    int j = n % 10;
    printf("%d\n",n-i*1000 +j*1000-j+i);
    return 0;
}
