class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(auto& i: strs){
            string s = i;
            sort(s.begin(), s.end());
            if(mp.find(s) == mp.end()){
                mp.insert({s, {i}});
            }
            else{
                mp[s].push_back(i);
            }
        }

        for(auto& [idx, val]: mp){
            ans.push_back(val);
        }

        return ans;

    }
};
