class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res = arr;

        int l = arr.size();
        int temp = res[l-1];
        res[l-1] = -1;
        for(int i = l - 2; i >= 0; i--){
            int c = res[i];
            res[i] = temp;
            if(c > temp) temp = c;
        }

        return res;
    }
};