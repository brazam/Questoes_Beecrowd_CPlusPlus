#include <iostream>
using namespace std;

char convert_dec_to_hex(int x){
    int r, aux;
    char resto[17] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(x > 0){
        r = x%16;
        if(r == 0){
            cout << 0;
        } else if (r == 1){
            cout << 1;
        } else if (r == 2){
            cout << 2;
        } else if (r == 3){
            cout << 3;
        } else if (r == 4){
            cout << 4;
        } else if (r == 5){
            cout << 5;
        } else if (r == 6){
            cout << 6;
        } else if (r == 7){
            cout << 7;
        } else if (r == 8){
            cout << 8;
        } else if (r == 9){
            cout << 9;
        } else if (r == 10){
            cout << 'A';
        } else if (r == 11){
            cout << 'B';
        } else if (r == 12){
            cout << 'C';
        } else if (r == 13){
            cout << 'D';
        } else if (r == 14){
            cout << 'E';
        } else if (r == 15){
            cout << 'F';
        }
        x/=16;
    }
}

int main(){
    int n;
    char resp[17];
    cin >> n;
    convert_dec_to_hex(n);
}