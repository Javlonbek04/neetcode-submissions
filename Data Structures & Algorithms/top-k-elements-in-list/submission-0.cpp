class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp;

        for(int i: nums){
            mp[i]++;
        }

        vector<pair<int, int>> vec;
        for(auto& [idx, val]: mp){
            vec.push_back({idx, val});
        }

        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b){
            return a.second > b.second;
        });

        for(auto& i : vec){
            if(k == 0) return ans;
            ans.push_back(i.first);
            k--;
        }

        return ans;
    }
};
