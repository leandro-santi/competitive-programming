#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int curr = 1;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            if(curr == 1) curr = 2;
            else if(curr == 2) curr = 1;
        }
        else if(s[i] == 'B'){
            if(curr == 2) curr = 3;
            else if(curr == 3) curr = 2;
        }
        else if(s[i] == 'C'){
            if(curr == 1) curr = 3;
            else if(curr == 3) curr = 1;
        }
        else cout << "Incorrect input" << endl;
    }

    cout << curr << endl;

    return 0;
}