#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	
	printf("Digite um caractere: ");
	scanf("%c", &letra);
	
	letra = tolower(letra);

	if (letra == 'a' ||letra == 'e' ||letra == 'i' ||letra == 'o' ||letra == 'u'){
		printf("O caractere '%c' e uma vogal.", letra);
	}
	else {
		printf("O caracter '%c' e uma consoante.", letra);
	}
	
	return 0;
}
