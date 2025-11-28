/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
     struct Info {
        bool isBST;
        int size;
        int minVal;
        int maxVal;
        int largestBST;
    };

    Info solve(Node* root) {
        if(!root) return {true, 0, INT_MAX, INT_MIN, 0};

        Info L = solve(root->left);
        Info R = solve(root->right);

        Info cur;
        cur.size = 1 + L.size + R.size;

        if(L.isBST && R.isBST && root->data > L.maxVal && root->data < R.minVal) {
            cur.isBST = true;
            cur.minVal = min(L.minVal, root->data);
            cur.maxVal = max(R.maxVal, root->data);
            cur.largestBST = cur.size;
        } else {
            cur.isBST = false;
            cur.minVal = INT_MIN;
            cur.maxVal = INT_MAX;
            cur.largestBST = max(L.largestBST, R.largestBST);
        }
        return cur;
    }

    int largestBst(Node* root) {
        return solve(root).largestBST;
    }
     
};