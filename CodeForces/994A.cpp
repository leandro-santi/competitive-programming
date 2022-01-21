#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int v1[n];
    int v2[m];
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }
    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }
    vector <int> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v1[i] == v2[j]) s.push_back(v1[i]);
        }
    }
    
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }

    cout << endl;
    return 0;
}