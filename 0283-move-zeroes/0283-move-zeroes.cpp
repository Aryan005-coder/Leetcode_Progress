class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>no_zero;
        for(int i=0 ; i<nums.size() ;i++)
        {
            if(nums[i] != 0)
            {
                no_zero.push_back(nums[i]);
               
        }
               
        }
        while(no_zero.size() < nums.size())
               {
                no_zero.push_back(0);
               
               }
                nums = no_zero;
     
    }
};