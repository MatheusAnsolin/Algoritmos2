#include <iostream>
#define TAM 10
//criar o conceito de livro(titulo, n� de pag e valor) + sistema para programar e exibir esses livros

using namespace std;

typedef struct {
    string titulo;
    int totalPaginas;
    double valor;
} TADLivro;

/*
typedef struct {
    string palavra;
} Titulo;
*/
TADLivro livros[TAM];
int indice = 0;

void cadastrarLivro();
void listarLivros();


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao = 0;
//    while(opcao>3){

    cout << "\tBem vindo � livraria!" << endl << endl;
    cout << "Por onde vamos come�ar?" << endl;
    cout << "1 - Cadastrar Livros"<<endl;
    cout << "2 - Listar Livros"<<endl;
    cout << "3 - Sair"<<endl;

    cin >> opcao;
    switch(opcao){
    case 1:
        cadastrarLivro();
    case 2:
        listarLivros();
    case 3:
        cout << "\nAt� logo." << endl;
        break;
    }
    getchar();
//    }
}

void cadastrarLivro(){
    for (indice; indice>(TAM-1);){
        cout << indice << endl;

        cout << "Pronto para cadastrar um livro?\nDigite o t�tulo:" << endl;
        cin >> livros[0].titulo;
        cout << "'"<< livros[0].titulo << "', certo. Agora me diga quantas p�ginas ele possui?" << endl;
        cin >> livros[0].totalPaginas;
        cout << "Uau, " << livros[0].totalPaginas <<", p�ginas!"<< endl;
        cout << "Legal, e qual pre�o dele?" << endl;
        cin >> livros[0].valor;
        cout << "Certo, R$ " << livros[0].valor << "." << endl;
        indice++;
    }
}
void listarLivros(){
    cout << "\t Livros dispon�veis:\n\n";
    for (int i = 0; i < (TAM-1); i++){
        cout << "Livro " << i+1 << livros[i].titulo << ", " << livros[i].totalPaginas << " p�ginas, valor: R$ " << livros[i].valor << endl;
    }
}
