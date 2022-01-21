#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int s = 0;
    string aux;
    while(n--){
        cin >> aux;
        if(aux.size() == 3){
            if((aux[0] == 'X' && aux[1] == '+' && aux[2] == '+') || (aux[0] == '+' && aux[1] == '+' && aux[2] == 'X')) s++;
            else if((aux[0] == 'X' && aux[1] == '-' && aux[2] == '-') || (aux[0] == '-' && aux[1] == '-' && aux[2] == 'X')) s--;
        }
    }
    cout << s << endl;

    return 0;
}