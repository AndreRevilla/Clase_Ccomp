#include <iostream>
using namespace std;

bool primo(int n){
    int cont{0};
    
    for (int i{2}; i<=n; i++){
        if (n%i==0){
            cont++;
        }
    }
    if (cont>2)
        return false;
    else
        return true;
}


int main(){
    int n;

    cout<<"Digite un numero: ";
    cin>>n;

    for (int i{2}; i<=n; i++){
        if (primo(i)){
            cout<<" "<<i;
        }
    }

    return 0;
}