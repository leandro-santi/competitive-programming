#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cities;
    cin >> n;
    string s;
    map<string, int> aux;

    while(n--){
        cin >> cities;
        
        aux.clear();

        for(int i = 0; i < cities; i++){
            cin >> s;
            aux[s] = 1;
        }

        cout << aux.size() << endl;
    
    }

    return 0;
}