class Solution {
  public:
    int countWays(int n) {
        // your code here
        
        if(n==1) return 1;
        if(n==2) return 2;
        
        int a = 1;
        int b = 2;
        int c;
        
        for(int i=3 ; i<=n ; i++){
            c = a+b;
            a = b;
            b = c;
           
        }
        return b;
        
    }
};
