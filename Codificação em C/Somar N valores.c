/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Funções */
int RealizaSoma (int S) /*REALIZA SOMA DE TODOS OS NUMEROS INTEIROS EXISTENTES ENTRE 1 E N (INCLUINDO N)*/
{
	int Somar, Contar;
	Somar = 0;
	for (Contar = 0; Contar <= S; Contar ++)
	{
		Somar = Somar + Contar;
	}
	return (Somar);
}

/* Corpo do Programa */
int main ()
{
	setlocale (LC_ALL, "");
	system ("cls");
	int S;
	printf ("Digite o valor desejado: ");
	fflush (stdin);
	scanf ("%i", &S); /*RECEBE VALOR PARA REALIZAÇÃO DA SOMA*/
	printf ("A soma dos valores é: %i", RealizaSoma (S));
	getch();
	return(0);
}
