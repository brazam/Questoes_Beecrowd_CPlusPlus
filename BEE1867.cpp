#include <iostream>
using namespace std;
long long int soma_Algarismos(long long int *x){
    long long int soma = 0;
    while(*x > 9){
        soma += *x%10;
        *x/=10;
    }
    return soma+*x;
}

int main(){
    long long int n, m;
    cin >> n >> m;
    while(n != 0 || m != 0){
        while(n > 9 || m > 9){
            if(n > 9){
                n = soma_Algarismos(&n);
            }
            if(m > 9){
                m = soma_Algarismos(&m);
            }
        }
        if(n > m){
            cout << 1 << endl;
        } else if (m > n){
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
        cin >> n >> m;
    }
}
