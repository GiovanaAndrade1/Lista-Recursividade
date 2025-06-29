# include <iostream>
using namespace std;

int SPell(int n){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return  2 * SPell(n - 1) + SPell(n - 2);
    }

    return 0;
}

int main(){
    int n = 0;
    cout <<" Informe qualquer elemento para calcularmos a sequencia de pell"<< endl;
    cin>> n;
    int resultado = SPell(n);
    cout <<" O elemento "<< n <<" da sequencia de pell e "<< resultado << endl;

    return 0;
}