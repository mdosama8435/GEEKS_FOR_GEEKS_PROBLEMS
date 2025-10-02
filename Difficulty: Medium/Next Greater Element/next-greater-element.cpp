class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int N = arr.size();
        vector<int> ans(N,-1);
        stack<int> st;
        
        for(int i=N-1 ; i>=0 ; i--){
            
            while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()>0)
            {
                ans[i] = st.top();
            }
            
                st.push(arr[i]);
        }
        return ans;
    }
};