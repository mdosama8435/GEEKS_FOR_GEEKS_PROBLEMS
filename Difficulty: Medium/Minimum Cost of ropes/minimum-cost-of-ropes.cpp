class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int x:arr){
            pq.push(x);
        }
        int totalcost = 0;
        
         while(pq.size()>1){
            int y = pq.top();pq.pop();
            int x = pq.top();pq.pop();

             int sum = x+y;
             totalcost += sum;
             
             pq.push(sum);
        }
        return totalcost;
    }
};