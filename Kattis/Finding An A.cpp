#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int flag;

    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'a'){
            flag = i;
            break;
        }
    }

    while(flag < s.length()){
        cout << s[flag] << "";
        flag++;
    }

    cout << endl;
    
    return 0;
}