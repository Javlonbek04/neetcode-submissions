class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        // solution 1
        // using map to kkep track number and it's frequensy
        /*
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
        */

        // solution 2
        // using prority_queue (min-heap)
        /*
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>> min_q;

        map<int, int> mp;

        for(int i: nums){
            mp[i]++;
        }

        for(auto& i: mp){
            min_q.push({i.second, i.first});
            if(min_q.size() > k){
                min_q.pop();
            }
        }

        while(k--){
            ans.push_back(min_q.top().second);
            min_q.pop();
        }
        */

        // solution 3
        // bucket sort

        map<int, int> mp;

        for(int i: nums){
            mp[i]++;
        }

        vector<vector<int>> vec(nums.size() + 1);

        for(const auto& i: mp){
            vec[i.second].push_back(i.first);
        }

        for(int i = vec.size() - 1; i >= 0; i--){
            for(const auto& j: vec[i]){
                ans.push_back(j);
                if(ans.size() == k) return ans;
            }
        }

        return ans;
    }
};
