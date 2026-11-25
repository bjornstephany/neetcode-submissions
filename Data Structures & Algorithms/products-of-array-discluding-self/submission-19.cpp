class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> res(s);
        vector<int> pref(s);
        vector<int> suff(s);

        pref[0] = 1;
        suff[s-1] = 1;
        for ( int i = 1; i < s; i++ )
        {
            pref[i] = nums[i-1] * pref[i - 1];
        }
        for ( int i = s - 2; i >= 0; i-- )
        {
            suff[i] = nums[i + 1] * suff[i + 1];
        }

        for ( int i = 0; i < s; i++ )
        {
            res[i] = pref[i] * suff[i];
        }
        return res;
    }
};
