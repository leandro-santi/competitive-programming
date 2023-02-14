#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, s1, s2; cin >> s1 >> s2;

    s = s1 + s2;

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}