class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char, int> mp;
        int low=0, mx=INT_MIN;
        
        for(int high=0;high<s.length();high++){
            mp[s[high]]++;
            while(mp.size()>k){
                mp[s[low]]--;
                if(mp[s[low]]==0)
                    mp.erase(s[low]);
                low++;
            }
            if(mp.size()==k){
                int len= high-low+1;
                mx= max(mx, len);
            }
        }
    return (mx==INT_MIN)?-1:mx;
    }
};