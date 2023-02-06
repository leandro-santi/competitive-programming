#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, r = "";
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])) r += s[i];
    }

    cout << r << endl;

    return 0;
}