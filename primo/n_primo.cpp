#include <iostream>
#include <locale.h>

using namespace std;

void primo(int num){
    int cont = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            cont++;
        }
    }
    if(cont > 1){
        cout << num << " não é primo!";
    }
    else{
        cout << num << " é primo!";
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    primo(n);
}