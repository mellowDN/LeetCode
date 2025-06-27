class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    int shift = 0;
    
    while (left < right) {
        left >>= 1;   // right shift both
        right >>= 1;
        shift++;
    }
    
    // Now left == right, so we found the common prefix
    // Shift it back left to restore the original position
    return left << shift;
}

    
};