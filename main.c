#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char texto[20];

void openOrCreate();
void insert();
void menu();
int main(){
    setlocale(LC_ALL, "Portuguese");
    openOrCreate();
    insert(texto);
    getch();
}
void openOrCreate(){
    FILE *ponteiroCriar;
    ponteiroCriar = fopen("primeiroArquivo.txt", "r");
    if(ponteiroCriar){
        printf("Aberto arquivo existente\n");
    } else {
        ponteiroCriar = fopen("primeiroArquivo.txt", "w");
        printf("Criado novo arquivo\n");
     }
    fclose(ponteiroCriar);
}
void insert(){
    FILE *ponteiroInserir;
    ponteiroInserir = fopen("primeiroArquivo.txt", "a");
    fflush(stdin); //limpeza de buffer
    printf("Digite o texto à gravar: \n");
    gets(texto);
    printf("\nDigitou %s", texto);
    fprintf(ponteiroInserir, &texto);
    fprintf(ponteiroInserir, "\n");
    fclose(ponteiroInserir);
    printf("\nDados Gravados! \n");
}
void menu(){
    system("cls");
    printf("Crud de gravação dados em arquivos com C");
    printf("");
}
