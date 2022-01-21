class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> aux;
        for(int i = 0; i < nums.size(); i+=2){
            int count = nums[i];
            while(count--){
                aux.push_back(nums[i+1]);
            }
        }
        
        return aux;
        
    }
};