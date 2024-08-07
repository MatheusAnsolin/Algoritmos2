#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char marca[30];
    char modelo[30];
    int ano;
} Carro;


int main()
{
    Carro c1;
    Carro vetorCarros[50];
    strcpy(c1.marca, "GM");
    strcpy(c1.modelo, "Vectra");
    c1.ano = 2001;

    printf("meu carro:\n");
    printf("Marca e modelo: %s %s", c1.marca, c1.modelo);
    printf("\nAno de Fabricação: %d \n", c1.ano);
    printf("Hello world!\n");
    return 0;
}
