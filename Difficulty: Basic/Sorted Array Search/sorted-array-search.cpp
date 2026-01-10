class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int n=arr.size();
        int l=0,h=n-1;
        while (l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){return true;}
            else if (arr[mid]>k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};