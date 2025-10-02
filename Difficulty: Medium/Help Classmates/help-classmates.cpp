// User function Template for C++

class Solution {

  public:
    vector<int> help_classmate(vector<int> arr, int n) {
        // Your code goes here
        vector<int> ans(n, -1);
        stack<int> st;
        
        for(int i = n-1 ; i>=0 ; i--){
            
            while(st.size()>0 && st.top() >= arr[i]){
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