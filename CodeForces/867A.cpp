#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int setosan = 0, santose = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'S' and s[i+1] == 'F') setosan++;
        else if(s[i] == 'F' and s[i+1] == 'S') santose++;
    }

    if (setosan > santose) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}