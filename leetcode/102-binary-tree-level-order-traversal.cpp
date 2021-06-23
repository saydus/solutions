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
    vector<vector<int>> levelOrder(TreeNode* root) {
        unordered_map<int, vector<int>> hash; 
        levelOrder(root, 0, hash);
    
        vector<vector<int>> answer; 
        for (int i = 0; i < hash.size(); ++i) {
            answer.push_back(hash[i]);
        }
        
        
        return answer; 
    }
    
    void levelOrder(TreeNode* root, int level, unordered_map<int, vector<int>>& answer) {
        if (!root) {
            return; 
        } else {
            answer[level].push_back(root->val);
            level = level + 1; 
            levelOrder(root->left, level, answer); 
            levelOrder(root->right, level, answer);
        }
    }
    
};