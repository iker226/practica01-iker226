
#include <stdio.h>
int main(){
    // Resolver ejercicio 3
    int a[3];
    int b[3];
    int c[3];

    for(int i=0; i<6; i++){
        printf("La direccion de a[%i] es: %p\n", i, &a[i]);
    }
    printf("\n");
    for(int i=0; i<6; i++){
        printf("La direccion de b[%i] es: %p\n", i, &b[i]);
    }
    printf("\n");
    for(int i=0; i<6; i++){
        printf("La direccion de c[%i] es: %p\n", i, &c[i]);
    }
    
    return 0;
}
