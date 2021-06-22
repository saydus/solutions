/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        // access k - 1'th front element in bst
        vector<int> inorder; 
        inorderTrav(root, inorder); 
        return inorder[k - 1];
    }
    
    void inorderTrav(TreeNode* root, vector<int>& inorder) {
        if (!root) {
            return; 
        } else {
            inorderTrav(root->left, inorder);
            inorder.push_back(root->val);
            inorderTrav(root->right, inorder);
        }
    }
};