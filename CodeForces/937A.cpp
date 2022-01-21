#include<bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    int v;
    set<int> x;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(v > 0){
            x.insert(v);
        }
    }
    
    cout << x.size() << endl;

    return 0;
}