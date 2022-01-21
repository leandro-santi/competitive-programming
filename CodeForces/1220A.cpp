#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countn = 0;
    int countz = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'n') countn++;
        else if(s[i] == 'z') countz++;
    }
    while(countn--) cout << "1 ";
    while(countz--) cout << "0 ";
    cout << endl;

    return 0;
}