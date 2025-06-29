#include <iostream> 
using namespace std;

//Faça uma função recursiva para somar de 1 ate N


int FuncSomatorio(int n){
    if (n == 1){
        return 1;
}
else{
    return n + FuncSomatorio(n-1);
}
}

int main(){
    int n = 0;
    cout <<" Informe um numero"<< endl;
    cin >> n;
    int resultado = FuncSomatorio(n);
    cout <<"O valor do somatório é"<< resultado << endl;


    return 0;
}