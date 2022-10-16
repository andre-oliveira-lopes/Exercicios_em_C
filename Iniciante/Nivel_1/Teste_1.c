#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{

	int *ptr_vetor;
	int qtd_num;
	int i;
	int aux;

	do
	{
		printf("DIGITE QUANTOS NUMEROS VOCE DESEJA GUARDAR: ");
		scanf("%d", &qtd_num);

		ptr_vetor = (int *)/*=*/(malloc(qtd_num * sizeof(int)));

		for (i = 0; i < qtd_num; i++)
		{
			printf("\nDigite o numero do indice [%d] = ", i + 1);
			scanf("%d", &ptr_vetor[i]);
		}

		printf("\nNumeros guardados, vamos Impimir em: ");
		Sleep(2000);
		printf("3...");
		Sleep(1000);
		printf("2...");
		Sleep(500);
		printf("1...\n");

		for (i = 0; i < qtd_num; i++)
		{
			printf("\n\t Os numeros quardados na ordem [%d] sao: %d", i + 1, ptr_vetor[i]);
		}

		printf("\n\n");
		free(ptr_vetor);
		printf("\n -- Memoria Liberada --\n");
		printf("-----------------------\n");
		printf("Gostaria de REFAZER o processo?\n");
		printf("1 - sim\n");
		printf("2 - nao\n");
		scanf("%d", &aux);
		system("cls");
	} while (aux != 2);

	system("Pause");
	return 0;
}