#include <stdio.h>
#include <stdlib.h>

typedef struct bixo_t {
	char nome[50];
	int idade;
} bixo_t;

int main ()
{
	int n, i;
	bixo_t *bixos;
	
	printf("qtos?\n");
	scanf("%i", &n);
	
	bixos = malloc(sizeof(bixo_t) * n);
	
	for (i=0; i<n; i++) {
		printf("nome do bixo %i\n", i);
		scanf("%s", bixos[i].nome);
	}
	
	for (i=0; i<n; i++) {
		printf("o bixo %i chama-se %s\n", i, bixos[i].nome);
	}

	return 0;
}
