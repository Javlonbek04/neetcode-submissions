class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for(int i : nums){
            if(mp[i]) return true;
            mp[i] = 1;
        }
        return false;
    }
};