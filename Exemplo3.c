#include <stdio.h>
#include <omp.h>

int main(){
    #pragma omp parallel 
    printf("Alo Mundo da thread %d de um total de %d!\n",
        omp_get_thread_num(), omp_get_num_threads());
    return 0;
}


