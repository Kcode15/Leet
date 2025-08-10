class Solution {
public:
    // Count digit frequencies of a non-negative integer n
    vector<int> digitFreq(int n) {
        vector<int> freq(10, 0);
        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }
        return freq;
    }

    // Compare two frequency arrays (size 10) for equality
    bool equalFreq(const vector<int>& a, const vector<int>& b) {
        for (int i = 0; i < 10; ++i)
            if (a[i] != b[i]) return false;
        return true;
    }

    bool reorderedPowerOf2(int N) {
        // Frequency of digits in the input number N
        vector<int> target = digitFreq(N);

        // Check all powers of two up to 2^30 (fits in 32-bit signed int ie till limit ie 10^9)
        for (int i = 0; i <= 30; ++i) {
            int powerof2 = (int)pow(2, i);; // 2^i
            if (equalFreq(target, digitFreq(powerof2)))
                return true;
        }
        return false;
    }
};