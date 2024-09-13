#include <iostream>
using namespace std;

int main(){
    int N;

    cout<<"Digite un numero entero: ";
    cin>>N;

    if (N==1){
        cout<<N;
    }
    else{
        cout<<1;
        for (int i{2}; i<=N; i++){
            if (i%2!=0){
                cout<<","<<i;
            }
        }
    }

    return 0;
}