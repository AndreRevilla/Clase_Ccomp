#include <iostream>
using namespace std;

bool esPrimo(int n){
    for (int i{2}; i<n ; i++){
        if (n%i == 0)
            return false;
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
    int n;
    cout<<"Digite un entero: ";
    cin>>n;
    imprimirPrimos(n);
}