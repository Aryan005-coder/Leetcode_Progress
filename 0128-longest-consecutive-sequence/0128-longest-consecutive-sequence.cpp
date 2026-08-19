class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int n= nums.size();
        int ans = 1;
        if(nums.empty())return 0;
        sort(nums.begin() , nums.end());
        int diff = 0 ;
        for(int i = 0 ; i <  n-1 ; i++)
        {  
            diff = nums[i+1] - nums[i];
            
            if(diff == 1)
           { 
             st.insert(nums[i]);
           }
           else if(diff>1)
           {
            ans = max(ans , (int)st.size()+1);
            st.clear();
           }
        }
       ans = max(ans , (int)st.size()+1);
       return ans;
    }
};