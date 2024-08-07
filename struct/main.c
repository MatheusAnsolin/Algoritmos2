#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 20
 //agenda possui vários contatos, com nome, sobrenome, uma lista de contatos, que contém email,
  // telefones(um telefone tem DDD, número e tipo(celular, empresa ou fixo)
  //e o endereço do contato ( rua, número e bairro)
typedef struct{
    char endereco[64];
} Email;

typedef struct{
    int ddd[3];
    char numero[30];
    enum TipoTelefone{celular, empresa, fixo} tipoTel;
} Telefone;

typedef struct{
    char rua[30];
    int numero;
    char bairro[30];
} Endereco;

typedef struct{
    char nome[48];
    char sobrenome[48];

    Email email;
    Telefone telefones[3];
    Endereco endereco;
} Contato;

Contato agenda[TAM]; // produto final de abstração de dados
//vetor do tipo contato

int qtdeContatos = 0;

//agora prototipar funções da agenda
void cadastrarContato();
void listarContatos();
void inserirContatoPadrao();

int main()
{
    int op;
    do{
        printf("Agenda 1.0 \n");
        printf("1 - Listar\n");
        printf("10 - Sair\n");

        printf("Sua opção: ");

        scanf("%d", &op);
    }
    while(op!=10);
    switch(op){
        case 1: listarContatos();
            break;
        case 10: printf("Até mais");
            break;
        default: printf("Opção inválida");
    }

    //na primeira execução cadastrar contato padrão para teste
}

void iserirContatoPadrao(){
    strcpy(agenda[0].nome, "Vazio");
    strcpy(agenda[0].sobrenome, "dos Santos");
    strcpy(agenda[0].email.endereco, "vazio@vazio.com.br");
    strcpy(agenda[0].telefones[0].numero, "0000-0000");
    agenda[0].telefones[0].tipoTel = 3;
    agenda[0].telefones[0].ddd = 49;

    qtdeContatos++;
}
void listarContatos(){
    printf("\nLista de Contatos Cadastrados: \n");
    for (int i = 0; i < qtdeContatos; i++){
        printf("%s \t %s \t %s \t", agenda[i].nome, agenda[i].sobremome, agenda[i].email.endereco);
        printf("Telefone %d %d %s", agenda[i].telefones[0].ddd, agenda)
        printf("\nfim da lista\n")
        getch();
    }
}

