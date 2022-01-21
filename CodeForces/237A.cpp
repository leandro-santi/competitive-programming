#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int count = 1;
    int h, m;
    int v[25][60];
    for(int i = 0; i < 25; i++){
        for(int j = 0; j < 60; j++){
            v[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        cin >> h >> m;
        v[h][m]++;
        if(v[h][m] >= count) count = v[h][m];
    }

    cout << count << endl;
    
    return 0;
}