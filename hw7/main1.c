#include <stdio.h>

int main(){
    int n = 7;
    int i,k;   
    for (i=1;i<=n;i++) {
        for(k=0;k<=n;k++) {
            if (k<=n-i) {
                printf(" ");
            }else{
                printf("%d ", i);
                }
        }
        printf("\n");
    }       
    return 0;
}
