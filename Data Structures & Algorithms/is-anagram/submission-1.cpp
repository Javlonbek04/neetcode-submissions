class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == t) return true;
        if(s.size() != t.size()) return false;
        //solution 1
        /*
        map<char, int> m_s;
        map<char, int> m_t;

        for(char& i: s){

            m_s[i] += 1;
        }
        for(char& i: t){
            m_t[i] += 1;
        }

        for(auto& [idx, val]: m_s){
            if(m_t[idx] != val) return false;
        }
        for(auto& [idx, val]: m_t){
            if(m_s[idx] != val) return false;
        }

        return true;
        */

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
