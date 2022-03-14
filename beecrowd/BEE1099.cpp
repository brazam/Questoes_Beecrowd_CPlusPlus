#include <iostream>
using namespace std;
int main(){
    int n,x,y,soma;
    int menor;
    cin >> n;
    soma = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if (x > y){
            menor = x;
            x = y;
            y = menor;
        }
        for (int j = x; j < y; j++){
            if (j%2 == 1 && j != x){
                soma += j;
            }
        }
        cout << soma << endl;
        soma = 0;
    }
}