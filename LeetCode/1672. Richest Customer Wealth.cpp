class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s = 0;
        int aux;
        for(int i = 0; i < accounts.size(); i++){
            aux = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                aux = aux + accounts[i][j];
            }
            if(aux > s) s = aux;
        }
        return s;
    }
};