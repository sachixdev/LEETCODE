class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;

        int copy = n;
        long long revNum = 0;

        while (n > 0) {
            int lastdigit = n % 10;
            revNum = revNum * 10 + lastdigit;
            n /= 10;
        }

        return revNum == copy;
    }
};