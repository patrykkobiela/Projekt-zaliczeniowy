#include <stdio.h>
#include <stdlib.h>
#include "SzyfrowanieCezara.h"
#include "OdszyfrowanieCezara.h"
#include "AlfabetMorsa.h"
#include "OdwrotnyAlfabetMorsa.h"

int main(){
    system("clear");
    printf("\nMENU:\n\nSZYFROWANIE CEZARA wybierz 1 \n\n");
    printf("ODSZYFROWANIE CEZARA wybierz 2\n\n");
    printf("Alfabet Morsa wybierz 3\n\n");
    printf("Odwrotny alfabet morsa wybierz 4\n\n");
    int a; 
    scanf("%d", &a);
    system("clear");
    switch(a){
        case 1:
        SzyfrowanieCezara();
        break;
        case 2:
        OdszyfrowanieCezara();
        break;
        case 3:
        AlfabetMorsa();
        break;
        case 4:
        OdwrotnyAlfabetMorsa();
        break;
        default:
        printf("Wybor nie poprawny \n");
    }

   
    

}
