#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux, sum = 0; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        sum += aux;
    }

    cout << sum - n + 1 << endl;
    
    return 0;
}