#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = false;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == 's' && s[i+1] == 's') flag = true;
    }

    flag ? (cout << "hiss") << endl : (cout << "no hiss") << endl;

    return 0;
}