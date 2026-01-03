class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
          vector<int> police, thief;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 'P')
                police.push_back(i);
            else
                thief.push_back(i);
        }
        
        int p1 = 0, p2 = 0, count = 0;
        
        while (p1 < police.size() && p2 < thief.size()) {
            if (abs(police[p1] - thief[p2]) <= k) {
                count++;
                p1++;
                p2++;
            }
            else if (police[p1] < thief[p2]) {
                p1++;
            }
            else {
                p2++;
            }
        }
        
        return count;
        
    }
};