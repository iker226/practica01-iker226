
#include <stdio.h>
int main(){
    // Resolver ejercicio 1
    int a[6];

    for (int i = 0; i<6; i++){
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    return 0;
}
