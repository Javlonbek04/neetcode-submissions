class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i_s = 0, i_t = 0;
        int l_s = s.size();
        int l_t = t.size();

        while(i_s < l_s && i_t < l_t){
            if(s[i_s] == t[i_t]){
                i_s++;
                i_t++;
            } else{
                i_t++;
            }
        }
        return (i_s == l_s);
    }
};