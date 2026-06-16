class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //solution 1
        /*
        for(int i = 0; i < nums.size(); i++){
            for(int j{i+1}; j < nums.size(); j++){
                if(nums[i] + nums[j] == target) return{i, j};
            }
        }*/

        // solution 2
        /*
        vector<pair<int, int>> vec;
        for(int i = 0; i < nums.size(); i++){
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b){
            return a.first < b.first;
        });
        
        int l = 0, r = nums.size()-1;

        while(l < r){
            int curr = vec[l].first + vec[r].first;
            if(curr == target){
                return {min(vec[l].second, vec[r].second), max(vec[l].second, vec[r].second)};
            }
            if(curr < target) l++;
            else r--;
        }
        */

        // solution 3

        map<int, int> mp; // val->idx

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end() && mp[diff] != i){
                return {mp[diff], i};
            }
            mp.insert({nums[i], i});
        }
        return {0, 0};
    }
};
