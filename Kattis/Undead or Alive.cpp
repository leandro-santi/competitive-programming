#include<bits/stdc++.h>

using namespace std;

int main(){
    int smiley, frowny;
    smiley = frowny = -1;
    string s;
    getline(cin, s);

    smiley = s.find(":)");
    frowny = s.find(":(");

    if(frowny >= 0 && smiley >= 0) cout << "double agent" << endl;
    else if(smiley >= 0) cout << "alive" << endl;
    else if(frowny >= 0) cout << "undead" << endl;
    else cout << "machine" << endl;

    return 0;
}