#include <ctype.h>
#include <stdio.h>

int OdszyfrowanieCezara(void)
  {
   int ch,key;
   printf("ODSZYFROWANIE\nPodaj przesuniecie: ");
   scanf("%d",&key);
   key%=26;
   if(key<0) key+=26;
   printf("Podaj wiadomosc (<Ctrl-Z>-koniec):");
   while((ch=getchar())!=EOF)
     {
      if(isupper(ch)) putchar('A'+(ch-'A'-key)%26);
      else if(islower(ch)) putchar('a'+(ch-'a'-key)%26);
      else putchar(ch);
     }
   return 0;
  }
