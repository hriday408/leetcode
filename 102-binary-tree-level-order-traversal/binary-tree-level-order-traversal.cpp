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
void levelorder(vector<vector<int>>&v2,int i,TreeNode* root){
    if(root==nullptr){
        return;
    }
    if(v2.size()<i+1){
        v2.push_back({});
    }
    v2[i].push_back(root->val);
    levelorder(v2,i+1,root->left);
    levelorder(v2,i+1,root->right);
    return;
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v2;
        levelorder(v2,0,root);
        return v2;
    }
};