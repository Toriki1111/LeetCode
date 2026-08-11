using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> arr = nums;
vector<int> arr2(2, 0); 
long long n = nums.size();
vector<int> count(n + 1, 0);

for(long i = 0; i < n; i++)
{
    count[arr[i]]++;
}
for(long x = 1; x <= n; x++)
{
    if(count[x] == 2)
    {
        arr2[0] = x; 
    }
    if(count[x] == 0)
    {
        arr2[1] = x; 
    }
}
return arr2;
    }
};