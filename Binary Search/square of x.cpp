Q: https://leetcode.com/problems/valid-perfect-square/description/
Approach : Use binary search here , if mid*mid == num we have the num , else we need another number which can be the possible answer.

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0 , e = num;
        while(s <= e)
        {
            long long mid = s + (e-s)/2;
            if(mid * mid == num)
                return true;
            else if ( mid * mid > num)
                e = mid-1;
            else
                s = mid+1;
        }
        return false;
    }
};
