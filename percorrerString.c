#include <stdio.h>

int main() {
    char frase[100];
    int vogais = 0, consoantes = 0;
    int tamanho = 1;

    printf("Digite uma frase: ");
    gets(frase);

    int i = 0;
    while (frase[i] != '\0') {
        char caractere = frase[i];

        // Verifica se o caractere é uma letra minúscula ou maiúscula
        if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
            // Verifica se o caractere é uma vogal
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
                caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
                vogais++;
            } else {
                consoantes++;
            }
        }
        tamanho++; // Incrementa o tamanho da string
        i++;
    }

    printf("\tNumero de vogais: %d\n", vogais);
    printf("\tNumero de consoantes: %d\n", consoantes);
    printf("\tTamanho da string: %d\n", tamanho-1); // Descontar o caracter NULL (\0)

    return 0;
}

