/*
 ============================================================================
 Name        : recupParcialProgram.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void OrdenarAlfabeticamente(char cadena[]);
void invertirCadena(char cadena[]);
int main(void) {
	char cadena[30]="cadenasASA";
	char otraCadena[20]="funciona";
	OrdenarAlfabeticamente(cadena);
	invertirCadena(otraCadena);
	return EXIT_SUCCESS;
}
void OrdenarAlfabeticamente(char cadena[])
{
    int size;
    size= strlen(cadena);
    char Auxiliar;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(cadena[i] < cadena[j])
            {
                Auxiliar = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = Auxiliar;
            }
        }
    }
    printf("\n%s\n", cadena);
}

void invertirCadena(char cadena[])
{
	int j=0;
	char auxCadena[20];
	int tam=strlen(cadena);

	for(int i=tam-1;i>=0;i--)
	{
		auxCadena[j]=cadena[i];
		j++;
	}
	auxCadena[tam]='\0';
	printf("%s",auxCadena);
}
