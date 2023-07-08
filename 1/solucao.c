#include <stdlib.h>
#include <stdio.h>


int main(void) {

	FILE *p_arquivo;

	p_arquivo = fopen("input.txt", "r");
	char linha[10] = "";
	int atual = 0, maximo_calorias = 0;

	while(fgets(linha, 10, p_arquivo)){
		if(linha[0] != '\n') {
			atual += atoi(linha);
		}
		else {
			if (atual > maximo_calorias) {
				maximo_calorias = atual;
			}
			atual = 0;
		}
	}
	printf("%d", maximo_calorias);
	fclose(p_arquivo);

	return 0;
}
