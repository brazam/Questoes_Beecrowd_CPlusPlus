#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    int n, m[16][16];
    int t, saida;
    cin >> n;
    while(n != 0){
        t = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                m[i][j] = 1;
                if(i > 0){
                    m[i][j] = m[i-1][j]*2;
                } else if (j > 0){
                    m[i][j] = m[i][j-1]*2;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i > 0 || j > 0){
                    m[i][j]*=2;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                saida = (m[i][j]+1)/2;
                if(n==1){
                    cout << saida;
                }
                else if(n==2){
                    if(j==0){
                        cout << saida;
                    }
                    else {
                        cout << " "<< saida;
                    }
                }
                else if(n==3){
                    if(j==0){
                        cout << setw(2) << saida;
                    }
                    else {
                        cout << setw(3) << saida;
                    }
                }
                else if (n == 4){
                    if(j == 0){
                        cout << setw(2) << saida;
                    } else {
                        cout << setw(4) << saida;
                    }
                }
            else if(n==5){
                if(j==0){
                    cout << setw(3) << saida;
                }
                else {
                    cout << setw(4) << saida;
                }
            }
            else if(n==6 || n==7){
                if(j==0){
                    cout << setw(4) << saida;
                } else{
                cout << setw(5) << saida;
                }
            }
            else if(n==8){
                if(j==0){
                    cout << setw(5) << saida;
                }
                else {
                    cout << setw(6) << saida;
                }
            }
            else if (n == 9){
                if(j == 0){
                    cout << setw(5) << saida;
                } else {
                    cout << setw(7) << saida;
                }
            }
            else if(n==10){
                if(j==0){
                    cout << setw(6) << saida;
                }
                else{
                    cout << setw(7) << saida;
                } 
            }
            else if(n==11 || n==12){
                if(j==0){
                    cout << setw(7) << saida;
                }
                else {
                    cout << setw(8) << saida;
                }
            }
            else if(n==13 || n==14){
                if(j==0){
                    cout << setw(8) << saida;
                }
                else{
                    cout << setw(9) << saida;
                }
            }
            else if(n==15){
                if(j==0){
                    cout << setw(9) << saida;
                }
                else {
                    cout << setw(10) << saida;
                }
            }
                if (j == n-1){
                    cout << endl;
                }
            }
        }
        cout << endl;
        cin >> n;
    }
}