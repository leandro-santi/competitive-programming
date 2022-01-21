class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> aux;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0) aux.push_back(nums[i]);
            else{
                aux.push_back(nums[i]+aux[i-1]);
            }
        }
        return aux;
    }
};