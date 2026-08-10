class Solution {
public: 
    bool isPalindrome(int x) {
        long long y,val,z = x;
        if(x < 0)
        {
        return false;
        }
        while(z > 0)
        {
        y = z % 10;
        z = z / 10;
        val = val * 10 + y;
        }
        if(val == x)
        {
            return true;
        }
        return false;
    }
};