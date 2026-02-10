#include <unordered_set>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;
        for (int x : arr) {
            int needed = target - x;
            if (seen.count(needed)) {
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};
