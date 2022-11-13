#include <iostream> // padrão
#include <string> // padrão
#include <conio.h> // padrão
#include<stdlib.h>
#include <windows.h>
#include <time.h>
//#include <string.h> // Essa biblioteca serve para usar os structs e manipulação de strings

using namespace std;

string usuario = "";
string senha = "";

string usuario1 = "";
string senha1 = "";

bool login_sucesso = false;

int main(int argc, char** argv)
{
printf(" ============================================== \n");
printf(" =              TELA DE CADASTRO              = \n");
printf(" ============================================== \n");
printf("Usuario: ");
cin >> usuario;
printf("Senha: ");
cin >> senha;
system("cls");

//////

    cout << "Seja Bem vindo a tela de login Embragen LTDA.\n\n";

    do{
        cout << "Digite seu login: ";
        cin >> usuario1;

        cout << "Digite sua senha: ";
        cin >> senha1;

        if (usuario == usuario1 && senha == senha1 )
        { 
            cout << "Login Concluido, Aguarde... \n\n ";
            login_sucesso=true;

    Sleep(2500);
    system("cls");

    system("pause");

    return 0;
    }     
    else
    {
        cout << "Login invalido !!: \n\n";
    }
    }
    while(!login_sucesso);

    return 0;
}