/*
* Autor: Matias Ezequiel Hermida
* Materia: Sintaxis y Semantica de los Lenguajes
*
* No considero letras a la'ñ' ni de vocales con con acento ni dieresis
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    printf("\n Ingrese caracter o frase: ");
    x = getchar();
    while(x != EOF)
    {
        if (isupper(x))
            printf("%c",tolower(x));
        else if (islower(x))
            printf("%c",toupper(x));
        else if (!isdigit(x))
            printf("%c",x);
        x = getchar ();
    }
    return 0;
}
