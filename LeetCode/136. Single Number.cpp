class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int only = 0;
        for(int i = 0; i < nums.size(); i++){
            only = only ^ nums[i];
        }
        return only;
    }
};