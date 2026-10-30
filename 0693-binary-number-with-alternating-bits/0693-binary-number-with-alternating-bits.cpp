class Solution {
public:
    bool hasAlternatingBits(int n) {
        // Shift n right by 1 and XOR with original n.
        // If n has alternating bits, (n ^ (n >> 1)) will yield a number with all 1s (e.g., 101 ^ 010 = 111).
        long long x = n ^ (n >> 1);
        
        // Check if x + 1 is a power of 2 (i.e., x is all 1s in binary).
        return (x & (x + 1)) == 0;
    }
};