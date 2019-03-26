#include <stdio.h>

int main ()
{

	char nome[10];
	int idade;
	
	scanf("%s", nome);
	scanf("%d", &idade);
	printf("%s\n",nome);
	printf("%d\n", idade);
	
	if(idade >= 18){
		printf("Você é de maior\n");
	}
	
	else
		printf("Você é de menor\n");
	
	return 0;	
	
	


}
