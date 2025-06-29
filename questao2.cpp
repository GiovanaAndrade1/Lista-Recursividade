#include <iostream>
using namespace std;
//Faça uma função recursiva para executar a potencia de um número. 

int Potencia(int base, int expoente) {
    

    if (expoente == 0){
        return 1;
    }

    else{
        return base * Potencia(base, expoente - 1);
    }


return 0;
}

int main(){
    int base = 0;
    int expoente = 0;
    cout << "Informe o numero e seu expoente"<< endl;
    cin >> base >> expoente;
    int resultado = Potencia(base, expoente);
    cout << " O resultado da potencia e: "<< resultado << endl;
    return 0;
}