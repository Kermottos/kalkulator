#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int liczba1, liczba2, wynik;
   char znak;
       printf("Wpisz pierwsza liczbe : \n");
            scanf("%d", &liczba1);
       printf("Wpisz druga liczbe: \n");
            scanf("%d", &liczba2);
            getchar();
       printf("Jaka operacje chcesz wykonac? (podaj znak: +, -, *, /): \n");
            scanf("%c", &znak);

switch (znak)
{
          case   '+': wynik=liczba1+liczba2;
                   printf("Wynik to: %d\n",wynik);
                   break;
          case   '-': wynik=liczba1-liczba2;
                   printf("Wynik to: %d\n",wynik);
                   break;
          case   '*': wynik=liczba1*liczba2;
                   printf("Wynik to: %d\n",wynik);
                   break;
          case   '/': wynik=liczba1/liczba2;
                   printf("Wynik to: %d\n",wynik);
                   break;
}
return 0;
}
