using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long max_water=0;
        long long curr_water=0;
        long long right = height.size() -1;
        long long left = 0;
        long long x,y;

        while(left < right)
        {
            if(height[left] < height[right])
            {
                y = height[left];
            }
            else
            {
                y = height[right];
            }
            x = right - left;
            curr_water= x*y;
            if(height[left] < height[right])
            {
                left++;
            }else
            {
                right--;
            }
            if(max_water < curr_water)
            {
                max_water= curr_water;
            }
        }
        return max_water;
    }
};