class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR gives 1 for positions where bits in start and goal differ
        int xorVal = start ^ goal;
        
        // Count the number of set bits (1s)
        return __builtin_popcount(xorVal);
    }
};