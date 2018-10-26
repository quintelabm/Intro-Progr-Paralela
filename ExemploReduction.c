#include <stdio.h>
#include <omp.h>
#define N 10
int main () {
    int i, n, parte;
    float a[N], b[N], res; /* Some initializations */
    n = N;
    parte = 2;
    res = 0.0;
    for (i=0; i < n; i++)
    {
        a[i] = i * 1.0; b[i] = i * 2.0; 
    }
    #pragma omp parallel for 
    #pragma omp default(shared) private(i) schedule(static,parte) reduction(+:res)
    for (i=0; i < n; i++){
        res = res + (a[i] * b[i]);
        printf("Thread: %d \n",omp_get_thread_num());
    }

    printf("Resultado Final = %f\n",res); 

    return 0;    
}

