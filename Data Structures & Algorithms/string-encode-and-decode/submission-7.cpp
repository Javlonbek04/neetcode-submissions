class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(const auto& s: strs){
            res += to_string(s.size()) + "#" + s;
        }
    cout << res;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int l = s.size(), i = 0;
        int len = 0;
        while(i < l){
            if(s[i] != '#'){
                len = len*10 + (s[i] - '0');
            } else{
                i += 1;
                if(len == 0){ 
                    res.push_back("");
                }
                    
                else {
                    res.push_back(s.substr(i, len));
                }
                i += len - 1;
                len = 0;
            }
            i++;
        }

        // for(const auto& r: res) cout << r << " ";
        return res;

    }
};
