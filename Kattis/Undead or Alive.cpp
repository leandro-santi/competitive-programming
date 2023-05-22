#include<bits/stdc++.h>

using namespace std;

int main(){
    int smiley, frowny;
    smiley = frowny = 0;
    string s;
    getline(cin, s);

    smiley = s.find(":)");
    frowny = s.find(":(");

    if(frowny >= 1 && smiley >= 1) cout << "double agent" << endl;
    else if(smiley >= 1) cout << "alive" << endl;
    else if(frowny >= 1) cout << "undead" << endl;
    else cout << "machine" << endl;

    return 0;
}