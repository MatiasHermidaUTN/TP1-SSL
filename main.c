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
    while(1)
    {
        printf("\n Ingrese caracter o frase (lee hasta \\n, no incluido): ");
        x = getchar();
        while(x != '\n')
        {
            if (isupper(x))
                printf("La letra es: %c, y su minuscula %c \n",x,tolower(x));
            else if (islower(x))
                printf("La letra es: %c, y su mayuscula %c \n",x,toupper(x));
            else if (!isdigit(x))
                printf("El caracter ingresado fue: %c \n",x);
            x = getchar ();
        }
    }
    return 0;
}
