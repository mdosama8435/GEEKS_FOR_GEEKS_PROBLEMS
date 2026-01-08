class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
         
        vector<int> result;
        solve(0,0,arr,result);
        return result;
        
    }
    void solve(int index,int sum,vector<int>& arr,vector<int>& result){
        if(index==arr.size()){
            result.push_back(sum);
            return;
        }
        
        solve(index +1,sum+arr[index],arr,result);
        solve(index +1,sum ,arr,result);
    }
};