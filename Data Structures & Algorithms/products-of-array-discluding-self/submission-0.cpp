class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l = nums.size();
        vector<int> res(l, 1);
        vector<int> before(l, 1);
        vector<int> after(l, 1);

        for(int i = 0; i < l; i++){
            if(i > 0) before[i] = before[i-1] * nums[i-1];
            if(i < l-1){
                after[l-i-2] = after[l-i-1] * nums[l-i-1];
            }
        }
        for(int i = 0; i < l; i++) res[i] = before[i] * after[i];

        return res;
    }
};
