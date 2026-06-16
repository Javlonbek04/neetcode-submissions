class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int d = target - nums[i];

            if(mp.find(d) != mp.end()) return {mp[d], i};
            else mp.insert({nums[i], i});
        }
        return {0,0};
    }
};
