#include <bits/stdc++.h>

using namespace std;

int hanoi(int n, char origin, char dest, char temp){
    int count = 1;
    
    if(n == 1){
        // cout << "Move disk 1 from " << origin << " to " << dest << endl;
    }
    else{
        count += hanoi(n-1, origin, temp, dest);
        // cout << "Move disk " << n << " from " << origin << " to " << dest << endl;
        count += hanoi(n-1, temp, dest, origin);
   }
   
   return count;
}

int main(){ 
    int n = true, count = 0;
    
    for(int i = 1; n != 0; i++){
        cin >> n;
        if(n == 0) break;
        cout << "Teste " << i << endl;
        count = hanoi(n, 'A', 'C', 'B');
        cout << count << endl;
    }
    
	return 0;
}