#include <stdio.h>

int main(){

    #pragma omp parallel num_threads(2)
    printf("Alo Mundo!\n");
    return 0;
}

