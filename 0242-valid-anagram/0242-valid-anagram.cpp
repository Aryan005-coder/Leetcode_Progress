class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char , int>p;
       unordered_map<char , int>q;

       if(s.size() != t.size())
       {
        return false;
       }
       for(int i = 0; i<s.size() ;i++)
       {
        p[s[i]]++;
        q[t[i]]++;
    
       }
     return p==q;  
    }
};