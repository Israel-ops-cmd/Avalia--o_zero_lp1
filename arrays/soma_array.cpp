#include <iostream>
#include <locale.h>

using namespace std;

void soma(){
    int n[5], sum = 0;
    for(int i=0; i<5; i++){
        cout << "Digite um n�mero inteiro: ";
        cin >> n[i];
        sum = sum + n[i];
    }
    cout << "A soma dos 5 n�meros �: " << sum << endl;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    soma();
}