#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int v[2];

    for(int i = 0; i < 2; i++){
        cin >> v[i];
    }

    sort(v, v+2);

    cout << v[0] << " " << v[1] << endl;

    return 0;
}