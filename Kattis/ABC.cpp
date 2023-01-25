#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(3);
    int aux;
    string search;

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.begin()+3);

    map<char, int> abc;
    abc['A'] = v[0];
    abc['B'] = v[1];
    abc['C'] = v[2];

    cin >> search;

    for(int i = 0; i < search.length(); i++){
        cout << abc[search[i]] << " ";
    }

    cout << endl;

    return 0;
}