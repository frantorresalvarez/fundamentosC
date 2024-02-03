#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
   
    char* agenda[10][4];
    
    agenda[0][0] = "Jose Vicente";
    agenda[0][1] = "Carratala";
    agenda[0][2] = "241253";
    agenda[0][2] = "jose@jose.com";
    
    agenda[0][0] = "Juan";
    agenda[0][1] = "Carboni";
    agenda[0][2] = "241253";
    agenda[0][2] = "juan@juan.com";
    

    printf("El correo del segundo registro de la agenda es: %s \n",agenda[1][3]);
    
    return 0;
}

