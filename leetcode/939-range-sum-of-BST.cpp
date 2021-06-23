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
    int rangeSumBST(TreeNode* root, int low, int high) {
        // traverse through the tree and have a sum
        int sum(0); 
        sumTree(root, sum, low, high);
        return sum; 
    }
    
    void sumTree(TreeNode* root, int& sum, int low, int high) {
        if (!root) {
            return; 
        } else {
            if (root->val >= low && root->val <= high) {
                // sum 
                sum += root->val; 
            }
            sumTree(root->right, sum, low, high);
            sumTree(root->left, sum, low, high);
        }
    }
};