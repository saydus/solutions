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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // general idea: 
        // 1. collect nodes that match the root node of subRoot
        // 2. search all of them. 
        
        vector<TreeNode* > potential; 
        findPotential(root, subRoot, potential); 
        // std::cout << potential.size() << std::endl; 
        
        for (auto ele : potential) {
//             test if the cur element is potentially the subRoot tree 
            if(exploreTree(ele, subRoot)) {
                return true; 
            } else {
                continue; 
            }
        }
        
        return false; 
        
    }
    
    bool exploreTree(TreeNode * ele, TreeNode * subRoot) {
        if ((ele && !subRoot) || (!ele && subRoot)) {
            return false; 
        } else if (!ele && !subRoot) {
            return true; 
        } else {
            if (ele->val == subRoot->val) {
                bool left = exploreTree(ele->right, subRoot->right);
                bool right = exploreTree(ele->left, subRoot->left);
                return left && right; 
            } else {
                return false; 
            }
        }
    }
    
    void findPotential(TreeNode * root, TreeNode* subRoot, vector<TreeNode* >& potential) {
        if (!root) {
            return; 
        } else {
            if (root->val == subRoot->val) {
                potential.push_back(root);
            }
            findPotential(root->right, subRoot, potential);
            findPotential(root->left, subRoot, potential);
        }
    }
};