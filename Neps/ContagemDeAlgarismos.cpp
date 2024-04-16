#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, num; cin >> n;
    
    string aux = "", iterator = "0123456789";
    map <char, int> standings;
    
    standings['0'] = 0;
    standings['1'] = 0;
    standings['2'] = 0;
    standings['3'] = 0;
    standings['4'] = 0;
    standings['5'] = 0;
    standings['6'] = 0;
    standings['7'] = 0;
    standings['8'] = 0;
    standings['9'] = 0;
    
    while(n--){
        cin >> num;
        aux += to_string(num);
    }
    
    for(int i = 0; i < static_cast<int>(aux.size()); i++){
        standings[aux[i]]++;
    }
    
    for(int i = 0; i < 10; i++){
        cout << i << " - " << standings[iterator[i]] << endl;
    }
	
	return 0;
}