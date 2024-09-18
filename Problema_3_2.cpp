#include <iostream>
using namespace std;

bool esPrimo(int num) {
    int i=2;
    if (num<=1){
        return false;
    }
    while(i < num){
        if (num % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

void imprimirPrimos(int n){
    for (int i{2}; i<n ; i++){
        if (esPrimo(n))
            cout<<" "<<i;
    }
    cout<<endl;
}

int main(){
    imprimirPrimos(50);
}
