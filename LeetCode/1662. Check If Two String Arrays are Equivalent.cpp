class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string aux1 = "";
        string aux2 = "";
        for(int i = 0; i < word1.size(); i++){
            aux1+=word1[i];
        }
        for(int i = 0; i < word2.size(); i++){
            aux2+=word2[i];
        }
       
        return aux1 == aux2;
    }
    
};