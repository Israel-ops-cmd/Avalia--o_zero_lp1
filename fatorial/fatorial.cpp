#include <iostream>
#include <locale.h> //biblioteca que permite o uso adequado de acentuação

using namespace std;

void fatorial(int n){
    int cont = n;
    int var = n;
    for(int i=var; i>1; i--){
        n = n * (var-1);
        var--;
    }
    cout << "O fatorial de " << cont << " é: " << n;
}

int main(){
    setlocale(LC_ALL, "Portuguese");// Permite printar acentuação nas palavras
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;
    fatorial(num);
    return 0;
}