#include <stdio.h>
#include "funciones.h"
int main(){
    char ip[20];
    int puerto;
    printf("Ingrese IP: ");
    scanf("%s", ip);
    printf("Ingrese puerto: ");
    scanf("%i", &puerto);
    if(val_ip(ip) == 1)
        printf("IP NO VALIDO\n");
    if(val_puerto(puerto) == 1)
        printf("PUERTO NO VALIDO");
}

