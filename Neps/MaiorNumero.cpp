#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, maior = -1;
    while(true){
        cin >> x;
        if(x == 0) break;
        if(x >= maior) maior = x;
    }

    cout << maior << endl;
}