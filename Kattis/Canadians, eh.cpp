#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    int aux = -1;
    aux = s.find("eh?");

    if(aux != -1 && s[s.length()-1] == '?'){
        cout << "Canadian!" << endl;
    }
    else cout << "Imposter!" << endl;
    
    return 0;
}