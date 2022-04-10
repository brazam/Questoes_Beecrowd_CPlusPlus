#include <iostream>
#include <string>
using namespace std;
int main(){
    string texto;
    cin >> texto;
    while(texto != "eof" || texto != "EOF"){
        for(int i = 0; texto[i]; i++){
            if(texto[i] == 'j' ||  texto[i] == 's' || texto[i] == 'v' ||  texto[i] == 'b' ){
                texto[i] = 'f';
            }
            if(texto[i] == 'J' || texto[i] == 'S'|| texto[i] == 'V' || texto[i] == 'B'){
                texto[i] = ' F';
            }
        }
        cin >> texto;
    }
    cout << texto;
}