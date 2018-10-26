#include <stdio.h>
#define N 10
void imprimeMat(int m[N][N], int tam);

int main(){
    int i,j;
    int m[N][N];
    #pragma omp parallel num_threads(4)
    #pragma omp for private(j)
    for(i=0 ; i < N ; i++){
        for(j=0; j < N ; j++){
            m[i][j] = i+2*j;
        }
    }
    imprimeMat(m,N);
}

void imprimeMat(int m[N][N], int tam){
    int i,j;
    for(i=0 ; i < tam ; i++){
        for(j=0; j < tam ; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

}
