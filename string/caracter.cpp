#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void repeticao(int &x, string palavras){
    for(int i = 0; i < palavras.length(); i++){//percorre o tamanho completo da string
        x++;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    string frase;
    cout << "Digite uma palavra ou frase: ";
    getline(cin, frase); //Lê todos os caracteres da string
    int cont = 0;
    repeticao(cont, frase);
    cout << "Existem " << cont << " caracteres na string!";
    return 0;
}