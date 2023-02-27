 class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for ( auto u : grid ) {
            reverse(u.begin(), u.end());
            int lo = lower_bound( u.begin(), u.end(), 0 ) - u.begin();
            ans += lo;
        }

        return ans;
    }
};