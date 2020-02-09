#include <stdio.h>
#include <stdlib.h>
int AlfabetMorsa(){
    printf("PODAJ TEKST DO ZASZYFROWANIA\n");
int c=0;
getchar();
while( (c=getchar()) !='\n'){
    if(c=='a'){printf(". - ");}
    if(c=='b'){printf("- . . . ");}
    if(c=='c'){printf("- . - . ");};
    if(c=='d'){printf("- . . ");};
    if(c=='e'){printf(". ");}
    if(c=='f'){printf(". . - . ");}
    if(c=='g'){printf("- - . ");}
    if(c=='h'){printf(". . . . ");}
    if(c=='i'){printf(". . ");}
    if(c=='j'){printf(". - - - ");}
    if(c=='k'){printf("- . - ");}
    if(c=='l'){printf(". - . . ");}
    if(c=='m'){printf("- - ");}
    if(c=='n'){printf("- . ");}
    if(c=='o'){printf("- - - ");}
    if(c=='p'){printf(". - - . ");}
    if(c=='r'){printf(". - . ");}
    if(c=='s'){printf(". . . ");}
    if(c=='t'){printf("- ");}
    if(c=='u'){printf(". . - ");}
    if(c=='v'){printf(". . . - ");}
    if(c=='w'){printf(". - - ");}
    if(c=='x'){printf("- . . - ");}
    if(c=='y'){printf("- . - - ");}
    if(c=='z'){printf("- - . . ");}
    if(c=='1'){printf(". - - - - ");}
    if(c=='2'){printf(". . - - - ");}
    if(c=='3'){printf(". . . - - ");}
    if(c=='4'){printf(". . . . - ");}
    if(c=='5'){printf(". . . . . ");}
    if(c=='6'){printf("- . . . . ");}
    if(c=='7'){printf("- - . . . ");}
    if(c=='8'){printf("- - - . . ");}
    if(c=='9'){printf("- - - . ");}
    if(c=='0'){printf("- - - - ");}
    if(c==' '){printf("     ");}
}
printf("\n");
}
