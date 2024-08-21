#include <iostream>

using namespace std;

class Pessoa {
  public:
    string nome;
    string tipoCNH;

    Pessoa( );
    Pessoa(string nome, string tipoCNH){
      cout << "Chamando o construtor de pessoa \n";
      this->nome = nome;
      this->tipoCNH = tipoCNH;
      }
      void cadastrarPessoa( ){

    };
};
class Carro {
  public:
    Pessoa dono;
    int ano;
    string modelo;

    Carro(Pessoa dono, int ano, string modelo){
      cout << "Chamando o construtor de carro\n";
      this->dono = dono;
      this->ano = ano;
      this->modelo = modelo;
    }
    void cadastrarCarro( ){

    };
};
void cadastrarPessoa( ){};
void cadastrarCarro( ){};
int main()
{
    cout << "Bem vindo a concessionaria!" << endl;
    int op;
    do {
        printf("Hoje voce pode: 1.0 \n");
        printf("1 - Cadastrar Pessoa \n");
        printf("2 - Cadastrar Veiculo \n");
        printf("9 - Sair \n");
        printf("\nSua Opcao: ");
        scanf("%d", &op);
        switch(op){
            case 1: cadastrarPessoa();
                break;
            case 2: cadastrarCarro();
                break;
            case 9: printf("\nAte mais! \n");
                break;
            default: printf("\nOpcao Invalida ou nao implementada! \n");
                system("cls");
        }

    } while (op != 9);



    return 0;
}
