#include <iostream>
#include <string>
using namespace std;
int main(){
    string text1, text2;
    cin >> text1;
    for(int i = 0; text1[i]; i++){
        if(text1[i] == 'p'){
            continue;
        } else {
            text2[i] = text1[i];
        }
    }
    cout << text2 << endl;
}