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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* answer(nullptr); 
        search(root, val, answer); 
        return answer; 
    }
    
    // pointer pass by reference * & 
    void search(TreeNode* root, int val, TreeNode* &answer) {
        if (!root) {
            return;
        } else {
            if (root->val == val) {
                answer = root; 
                return; 
            } else {
                if (val > root->val) {
                    search(root->right, val, answer); 
                } else {
                    search(root->left, val, answer); 
                }
            }
        }
    }
};