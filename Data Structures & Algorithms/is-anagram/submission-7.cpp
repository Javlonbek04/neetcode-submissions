class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.size(), l2 = t.size();
        if(l1 != l2) return false;
        vector<short> v1(26, 0);
        for(const char& c : s) v1[c-'a'] += 1;
        for(const char& c : t) v1[c-'a'] -= 1;

        for(short i : v1) if(i != 0) return false;

        return true;

    }
};
