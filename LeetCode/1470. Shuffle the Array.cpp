class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> flag;
        for(int i = 0; i < nums.size()/2; i++){
            flag.push_back(nums[i]);
            flag.push_back(nums[i+n]);
        }
        
        return flag;
    }
};