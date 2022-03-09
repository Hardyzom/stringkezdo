#include <stdio.h>
#include "prog1.h"

int get_int(string szoveg){
    int a;
    printf("%s",szoveg);
    scanf("%d",&a);
    return a;
}

int main(){

//string szoveg= "Hello";
string nev = get_string("Neved: ");
printf("Hello %s!\n", nev);
int szam= get_int("Adjon meg egy szamot: ");
printf("A megadott szam: %d\n",szam);
return 0;

}