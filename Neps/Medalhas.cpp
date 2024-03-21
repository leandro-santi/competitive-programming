#include <bits/stdc++.h>

using namespace std;

bool custome_compare(pair<int, int> &p1, pair<int, int> &p2)
{
    return p1.first < p2.first;
}

int main()
{
    pair<int, int> standings[3];
    int t1, t2, t3; cin >> t1 >> t2 >> t3;
    
    standings[0].first = t1; standings[0].second = 1;
    standings[1].first = t2; standings[1].second = 2;
    standings[2].first = t3; standings[2].second = 3;
    
    sort(begin(standings), end(standings), custome_compare);
    
    for(int i = 0; i < 3; i++){
        cout << standings[i].second << endl;
    }
    
    cout << endl;

    return 0;
}