#include <stdio.h>

void round_func(float f){
    printf("%.0f",f);
}

int main(){
    float f = 3.6222;
    round_func(f);
    return 0;
}
