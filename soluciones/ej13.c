
#include <stdio.h>
int main() {
	//Resolver ejercicio 13
   
   
    int A[3][3];
    int B[3];

    // Llenar la matriz
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    //  Construir el arreglo B 
    for(int i=0;i<3;i++){

        // si i % 3 == 1 ? suma fila
        if(i % 3 == 1){
            int suma = 0;
            for(int j=0;j<3;j++){
                suma += A[i][j];
            }
            B[i] = suma;
        }

        // si i % 3 == 2 ? producto fila
        else if(i % 3 == 2){
            int producto = 1;
            for(int j=0;j<3;j++){
                producto *= A[i][j];
            }
            B[i] = producto;
        }

        // si i % 3 == 0 ? suma columna
        else{
            int suma = 0;
            for(int j=0;j<3;j++){
                suma += A[j][i];
            }
            B[i] = suma;
        }
    }

    //  Imprimir B 
    printf("\nArreglo B:\n");
    for(int i=0;i<3;i++){
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}
