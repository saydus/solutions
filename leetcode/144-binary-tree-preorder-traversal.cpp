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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer; 
        
        traverse(answer, root); 
        
        return answer; 
    }
    
    void traverse(vector<int>& answer, TreeNode* root) {
        if (!root) {
            return; 
        } else {
            answer.push_back(root->val);
            traverse(answer, root->left); 
            traverse(answer, root->right);
        }
    }
};