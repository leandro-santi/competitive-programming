#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n][n];
    for(int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1];
    }
    int k; 
    cin >> k;
    int aux = n;
    for(int i = 0; i < n; i++){
        if(v[i][1] < k) aux--;
    }

    cout << aux << endl;

    return 0;
}