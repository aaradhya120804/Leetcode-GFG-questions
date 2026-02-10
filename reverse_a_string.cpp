class Solution {
  public:
    string reverseString(string& s) {
        int n = s.length();
        int left=0, right=n-1;
        
        while(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
        
    }
};