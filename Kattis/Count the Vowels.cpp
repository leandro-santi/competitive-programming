#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int count = 0;
    string s;

    getline(cin, s);
   
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
    }

    cout << count << endl;

    return 0;

}