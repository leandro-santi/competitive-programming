#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string winner;
    string first, diff;
    int firstc = 0, diffc = 0;
    for(int i = 0; i < n; i++){
        string aux;
        cin >> aux;
        if(i == 0){
            first = aux;
            firstc++;
        }
        else{
            if(aux == first) firstc++;
            else{
                 diffc++;
                 diff = aux;
            };
        }
    }
    if(firstc > diffc) cout << first << endl;
    else cout << diff << endl;
    
    return 0;
}