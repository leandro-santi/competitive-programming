class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cont = 0;
        for(int i = 0; i < S.size(); i++){
            for(int j = 0; j < J.size(); j++){
                if(S[i] == J[j]) cont++;
            }
        }
        return cont;
    }
};