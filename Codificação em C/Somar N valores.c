/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Fun��es */
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
	scanf ("%i", &S); /*RECEBE VALOR PARA REALIZA��O DA SOMA*/
	printf ("A soma dos valores �: %i", RealizaSoma (S));
	getch();
	return(0);
}
