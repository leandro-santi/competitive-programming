#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if(n > 10){
            int counted = n-2;
            cout << s[0] << counted << s[n-1] << endl;
        }
        else cout << s << endl;
        
    }
    return 0;
}