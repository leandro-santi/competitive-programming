#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string aux[n+1];
    for(int i = 1; i <= n; i++){
        cin >> aux[i];
    }

    for(int i = 1; i <= n; i++){
        if(i%2 != 0) cout << aux[i] << endl;
    }
    
    return 0;
}