class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
    {//ew
        for(int a = 1;  a < nums.size();a++)
        {
            for(int b=a;b<nums.size();b++){
                if(target==nums.at(b)+nums.at(b-a))
                {
                     return {b-a,b};
                }
            }
        }
        return {};
    }
};