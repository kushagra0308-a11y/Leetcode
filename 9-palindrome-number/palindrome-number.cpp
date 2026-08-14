class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long rev=0;
        int n=x;
        while (x>0){
            int pop = x%10;
            x = x/10;
            rev = rev*10 + pop;         
        }
        return rev==n;
    }
};