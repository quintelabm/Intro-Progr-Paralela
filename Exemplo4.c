#include <stdio.h>
#include <omp.h>

int main(){
    double inicio = omp_get_wtime();
    if(!omp_in_parallel()){
        printf("Numero de processadores: %d\n", omp_get_num_procs());
        printf("Numero maximo de threads: %d\n", omp_get_max_threads());
    }
    double final = omp_get_wtime();
    printf("inicio = %.16g\nfinal = %.16g\ndiff = %.16g\n",
        inicio, final, final-inicio);
    return 0;
}

