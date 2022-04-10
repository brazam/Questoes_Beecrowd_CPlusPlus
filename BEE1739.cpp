#include <iostream>
using namespace std;
int main(){
    unsigned long long n, j=1, trib[100];
    unsigned long long fib[10000] = {0,1};
    int aux;
    for(int i = 2; i < 1000; i++){
        fib[i] = fib[i-1] + fib[i-2];
        if(fib[i]%3 == 0 || fib[i]%10 == 3){
            trib[j] = fib[i];
            j++;
        } else {
            aux = fib[i];
            while(aux != 0){
                aux = aux/10;
                if(aux%10 == 3){
                    trib[j] = fib[i];
                    j++;
                    break;
                }
            } 
        }
    }
    
    while(cin >> n){
        cout << trib[n] << endl;
    }
}