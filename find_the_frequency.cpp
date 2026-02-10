class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        int count=0;

        for(int num:arr) {
            if(num==x) {
                count++;
            }
        }
        return count;
    }
};
