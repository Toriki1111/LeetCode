#include<vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        long long n = nums.size();
        vector<int> result(n,0);
        long long count = 0;
        for(int i = 0; i < n ;i++)
        {
            for(int j = 0; j < n; j++) {
                if(nums[j] < nums[i]) {
                    count++;
                }
        }
        result[i] = count;
        count = 0;
    }
    return result;
    }
};