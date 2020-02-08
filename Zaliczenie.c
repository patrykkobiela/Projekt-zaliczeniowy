#include <stdio.h>
#include <stdlib.h>
#include "SzyfrowanieCezara.h"
#include "OdszyfrowanieCezara.h"

int main(){
    printf("SZYFROWANIE CEZARA wybierz 1 \n");
    printf("ODSZYFROWANIE CEZARA wybierz 2 ");
    int a; 
    scanf("%d", &a);
    printf("%d \n", a);
    switch(a){
        case 1:
        SzyfrowanieCezara();
        break;
        case 2:
        OdszyfrowanieCezara();
        break;
        default:
        printf("Wybor nie poprawny \n");
    }
   
    

}
