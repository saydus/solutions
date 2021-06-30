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
    int deepestLeavesSum(TreeNode* root) {
        // leaves at max depth? 
        int depth = maxDepth(root); 
        
        // now find the leaves that we need (it will be the leaves at max depth)
        
        int sum = 0; 
        deepLeaves(root, 1, sum, depth); 
        
        return sum; 
    }
    
    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0; 
        } else {
            return std::max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
        }
    }
    
    void deepLeaves(TreeNode * root, int level, int &sum, int depth) {
        if (!root) {
            return; 
        } else if (!root->right && !root->left && level == depth) {
            sum += root->val; 
        } else {
            // keep going 
            deepLeaves(root->left, level + 1, sum, depth); 
            deepLeaves(root->right, level + 1, sum, depth);
        }
    }
    
};