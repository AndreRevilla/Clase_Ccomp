#include <iostream>
using namespace std;

int main(){
    int suma;

    for (int i{0}; i<1000000; i++){
        if (i%3==0 || i%5==0){
            suma +=i;
        }
    }

    cout<<"La suma de todos los multiplos de 3 o 5 menores a 1000000 es: "<<suma<<endl;

    return 0;
}