#include <stdio.h>

int main ()
{

	char nome[10];
	int *pIdade;
	int idade;
	
	pIdade = &idade;
	
	scanf("%s", nome);
	scanf("%d", pIdade);
	printf("%s\n",nome);
	printf("%d\n", *pIdade);
	
	if(*pIdade >= 18){
		printf("Você é de maior\n");
	}
	
	else
		printf("Você é de menor\n");
	
	return 0;	
	
	


}
