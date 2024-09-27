#include <iostream>
#include <locale.h>

using namespace std;

void soma(){
    int n[5], sum = 0;
    for(int i=0; i<5; i++){
        cout << "Digite um número inteiro: ";
        cin >> n[i];
        sum = sum + n[i];
    }
    cout << "A soma dos 5 números é: " << sum << endl;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    soma();
}