class Solution {
  public:
    int countSubarray(vector<int> &arr, int k) {
        int n=arr.size();
        int total = n*(n+1)/2;
        int invalid = 0, len=0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]<=k){
                len++;
            }
            else{
                invalid += (len*(len+1))/2;
                len=0;
            }
        }
        invalid +=(len*(len+1))/2;
    return total-invalid;
    }
};