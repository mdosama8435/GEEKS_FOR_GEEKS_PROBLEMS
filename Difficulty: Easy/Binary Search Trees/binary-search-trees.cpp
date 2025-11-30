// User function Template for C++

class Solution {
  public:
    bool isBSTTraversal(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return true;

        int i = 1;
        while (i < n) {
            if (arr[i - 1] >= arr[i]) {
                
                return false;
            }
            i++;   
        }

        return true;
    }
};
