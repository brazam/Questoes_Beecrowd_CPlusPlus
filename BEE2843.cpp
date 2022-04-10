#include <iostream>
#include <vector>
using namespace std;
int main(){
    string digit;
    int E[1000], R[1000], soma[1000], fase[1000];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> E[i] >> R[i];
        soma[i] = E[i] + R[i];
        fase[i]=1;
    }

    for(int j = 1; j <= n; j++){
        for(int i = 1; i <= n; i++){
            if(fase[i] == j){
                if(i%2 == 0){
                    if(soma[i-1] > soma[i]){
                        soma[j] = soma[i];
                        fase[i]++
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << fase[i] << " ";
    }
}