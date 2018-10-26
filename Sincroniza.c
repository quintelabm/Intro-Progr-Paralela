#include <stdio.h>
#include <omp.h>
void foo(int x){
    printf("Thread: %d, x: %d\n", omp_get_thread_num(), x);
}
int main(){
    int x = 1;
    #pragma omp parallel num_threads(2)
    {
        #pragma omp master
        {
            x++;
        }
        //#pragma omp barrier
        foo(x);      
    }
    return 0;
}

