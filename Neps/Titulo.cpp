#include <bits/stdc++.h>

using namespace std;

string title(string F){
    for(int c = 0; c < F.size(); c++){
        if(c == 0) F[c] = (char) toupper(F[c]);
        else if(F[c-1] == ' ') F[c] = (char) toupper(F[c]);
        else F[c] = (char) tolower(F[c]);
    }
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
	
	return 0;
}