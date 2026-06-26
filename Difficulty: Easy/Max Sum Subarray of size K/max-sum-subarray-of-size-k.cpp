class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int max_sum = INT_MIN;
        int sum = 0;
        
        for(int i = 0; i<=k-1 ; i++){
            sum += arr[i];
        }
        if(sum > max_sum){
            max_sum = sum;
        }
        
        
        int s = 1, e=k;
        while(e<n){
            sum = sum - arr[s-1] + arr[e];
            if(sum > max_sum){
                max_sum = sum;
            }
            s++;
            e++;
        }
        return max_sum;
    }
};