class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n= val.size();
        vector<pair<double,int>> v;
        
        for(int i=0;i<n ; i++){
            double ratio = (double)val[i]/wt[i];
            v.push_back({ratio,i});
            
        }
         sort(v.begin(),v.end(),greater<>());
         
        double totalValue =0.0;
       
       for(int i=0 ;i<n && capacity>0 ;i++){
           int idx = v[i].second;
            
            if(wt[idx] <= capacity) {
                
                capacity -= wt[idx];
                totalValue += val[idx];
            } else {
                
                totalValue += v[i].first * capacity;
                capacity = 0;
            }
       } 
       return totalValue;
    }
};
