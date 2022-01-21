class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> aux;
        int greatest = 0;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > greatest) greatest = candies[i];
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= greatest) aux.push_back(true);
                else aux.push_back(false);
        }
        
        return aux;
    }
};