#include <iostream>
#include <stdio.h>
//todas bibliotecas do C++ s�o assim, sem extens�o. sem #include <stdio.h>, s� #include <stdio>
// apesar de suportar C, ent�o pode jogar o c�digo C aqui dentro

using namespace std;



typedef struct {
    string nome;
    string sobrenome;
    int idade;

}Pessoa;

int main()
{
    Pessoa usuario;
    cout << "Hello User!" << endl;
    cout << "\nPlease, tell me your name: ";
    cin >> usuario.nome;
    cout << "\n\nWelcome, " << usuario.nome; << endl;
    cout << "How old are you?" << endl;


    return 0;
}
