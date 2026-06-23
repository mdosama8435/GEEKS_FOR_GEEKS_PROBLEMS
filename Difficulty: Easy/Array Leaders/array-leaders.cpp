class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        
         int n = arr.size();
         int max = INT_MIN;
         int count = 0;
         vector<int> v;
         
         for(int i=n-1 ; i >=0 ; i--){
             if(arr[i] >= max){
                 max = arr[i];
                 count++ ;
                 v.push_back(max);
             }
    }
    reverse(v.begin(), v.end());
    return v;
   }
};