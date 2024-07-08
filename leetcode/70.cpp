class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        if(n==2 )return 2;
         int x=climbStairs(n-1);
         int y= climbStairs(n-2);
         return x+y;

        
    }
};