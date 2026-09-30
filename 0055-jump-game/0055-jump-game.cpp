class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Int_max = 0 ; 
        for(int i = 0; i< nums.size() ; i++)
        {
            if(i > Int_max)return false;
            Int_max = max(Int_max , i + nums[i]);
        }
        return true;
    }
};