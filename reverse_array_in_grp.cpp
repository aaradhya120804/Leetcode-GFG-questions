class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        
    int n=arr.size();
    for(int i=0;i<n;i+=k){
        int start=i;
        int end=min(i+k-1,n-1);
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    }
};
