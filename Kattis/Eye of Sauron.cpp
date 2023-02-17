#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int t1 = 0, t2 = 0, flag = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '|' && flag == false) t1++;
        else if(s[i] == '|' && flag == true) t2++;
        else if(s[i] != '|') flag = true;
    }

    t1 == t2 ? cout << "correct" << endl : cout << "fix" << endl;
    
    return 0;
}