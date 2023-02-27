class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for ( int i = 0; i < numbers.size(); i++ ) {
            int val = target - numbers[i];
            int lo = lower_bound ( numbers.begin()+i+1, numbers.end(), val ) - numbers.begin();
            if ( lo < numbers.size() && numbers[lo] == val ) {
                return { i+1, lo+1 };
            }
        }

        return {-1, -1};
    }
};