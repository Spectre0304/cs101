#include <stdio.h>

int main()
{
    int j = 1;
    int x = 0;
    double pi = 0.0;
    long ipi = 0;
    for(int i = 1;i <= 500000;i+=2){
        if(j == 1){
            pi += (4.0 / i);
            j--;
        }else{
            pi -= (4.0 / i);
            j++;
        }
        ipi = pi * 100000;
            if(ipi == 314159){
            x = i;
            break;
            }
    }
    
    pi = (int)(pi*100000-0.5)/100000.0;
    printf("最小的X=%d %.5lf",x,pi);
    return 0;
}
