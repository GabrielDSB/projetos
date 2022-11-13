#include <iostream> // padrão
#include <string> // padrão
#include <fstream>
#include <conio.h> // padrão
#include<stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

char opc = "s";

    while((opc=="s")or(opc=="S")){
        cout << "Continuar Digitando DTA ?: ";
        cin >> opc;

    }

int dta;

int main(){

    cout << "Digite a Dta da carga: ";
    cin >> dta;

    ofstream arquivoS;
    arquivoS.open("dta.txt",ios::app);

    arquivoS << dta << endl;
    arquivoS.close();

    ifstream  arquivoE;
    string linha;
    arquivoE.open("dta.txt");

    if(arquivoE.is_open()){
        while(getline(arquivoE,linha)){
            cout << linha << endl;
        }
        arquivoS.close();
    }else{
        cout << "Arquivo não pode ser aberto" << endl;
    }

    system("pause");
    return 0;
}