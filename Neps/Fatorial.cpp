#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, fat = 1; cin >> n;
    
    if(n  > 0){
        while(n > 0){
            fat *= n;
            n--;
        }
    }
    
    cout << fat << endl;

    return 0;
}