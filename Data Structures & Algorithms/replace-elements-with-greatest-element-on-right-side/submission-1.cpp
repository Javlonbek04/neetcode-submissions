class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res = arr;

        int l = arr.size();
        int rightMax = -1;
        
        for(int i = l - 1; i >= 0; i--){
            int temp = res[i];
            res[i] = rightMax;
            rightMax = max(rightMax, temp);
        }

        return res;
    }
};