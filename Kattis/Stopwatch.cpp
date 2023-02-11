#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cont = 0; cin >> n;
    int aux[n];
    bool stopwatch;

    for(int i = 0; i < n; i++){
        cin >> aux[i];
        if(i%2 == 0){
            stopwatch = true;
        }
        else if(i%2 != 0){
            stopwatch = false;
            cont += (aux[i] - aux[i-1]);
        }
    }

    if(stopwatch) cout << "still running" << endl;

    else cout << cont << endl;

    return 0;
}