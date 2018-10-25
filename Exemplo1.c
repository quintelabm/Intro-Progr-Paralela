#include <stdio.h>

int main(){

    #pragma omp parallel
    printf("Alo Mundo!\n");
    return 0;
}

