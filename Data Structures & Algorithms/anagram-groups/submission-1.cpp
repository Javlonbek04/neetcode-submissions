class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        // solution 1
        // sorting the each item
        /*
        map<string, vector<string>> mp;

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

        */

        // solution 2
        // using vector O(26) instead of sorting

        map<vector<int>, vector<string>> mp;
        for(string& i : strs){
            vector<int> v(26, 0);
            for(char ch: i) v[ch - 'a']++;
            if(mp.find(v) == mp.end()){
                mp.insert({v, {i}});
            }
            else {
                mp[v].push_back(i);
            }
        }

        for(auto& [idx, val]: mp){
            ans.push_back(val);
        }
        return ans;
    }
};
