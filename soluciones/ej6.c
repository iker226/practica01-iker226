
#include <stdio.h>
int main(){
    // Resolver ejercicio 6
    
    int m[2][4];
    
    for (int i=0; i<2; i++){
    	for(int j=0; j<4; j++){
    		printf("La direccion de m[%d][%d] es: %p\n", i, j, &m[i][j]);
		}
	}
    return 0;
}
