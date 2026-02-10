class Solution {
  public:
    long long power(long long base, int exp, int limit) {
        long long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
            if (result > limit)
                return limit + 1;   
        }
        return result;
    }

    int nthRoot(int n, int m) {
        int low = 1, high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long val = power(mid, n, m);

            if (val == m)
                return mid;
            else if (val < m)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};