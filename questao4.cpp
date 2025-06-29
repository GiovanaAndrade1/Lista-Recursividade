# include <iostream>
using namespace std;

string Fibo(int n){
    if (n == 0){
        return "b";
    }
    else if (n == 1){
        return "a";
    }
    else {
        return  Fibo(n - 1) + Fibo(n - 2);
    }

}

int main(){
    int n = 0;
    cout <<" Informe qualquer elemento para calcularmos a sequencia de pell em letras"<< endl;
    cin>> n;
    string resultado = Fibo(n);
    cout <<" O elemento "<< n <<" da sequencia de fibonanci e "<< resultado << endl;

    return 0;
}