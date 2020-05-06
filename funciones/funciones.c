#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

//función que pasa los alfanuméricos a int
void auxiliar(){

}

int val_ip(char ip[]){
    int IP[4]; //array para guardar valores
    char aux[4];
    //extrae los valores de la IP y los pasa a un int
    //Pasa por todas las partes de la IP, toma cada caracter y los pasa a otro string
    //Usa la función atoi para transformar el valor alfanumérico a numérico
    for(int bandera = 0, z = 0, i = 0, c; bandera < 4; bandera ++, i++, z++){
        for( c = 0; ip[i] != '.' && ip[i] != '\0'; i++, c++){
            aux[c] = ip[i];
        }
        
        aux[c] = '\0';
	//el terminador para poder usar atoi
	IP[z] = atoi(aux);
    }
    // porque la IP no puede contener valores mayores a 255 y la red no puede ser 127, 191, 255 o 0
    if(!((IP[0] > 255 || IP[1] > 255 || IP[2] > 255 || IP[3] > 255) || (IP[0] == 127 || IP[0] == 191 || IP[0] == 255) || (IP[0] == 0))){
        return 0;
    } else return 1;
    // si la IP no es válida devuelve un 1
}

int val_puerto(int puerto){
    if(!(puerto < 49152 || puerto > 65535)){
        return 0;
    } else return 1;
    // si el puerto no es válido devuelve un 1 
}
        

