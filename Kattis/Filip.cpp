#include<bits/stdc++.h>

using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
  
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]); // Change characters
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    reverseStr(s1);
    reverseStr(s2);

    int aux1, aux2;

    aux1 = stoi(s1);
    aux2 = stoi(s2);

    aux1 > aux2 ? cout << aux1 << endl : cout << aux2 << endl;
    
    return 0;
}