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
void levelorder(vector<vector<int>>&v2,TreeNode* root){
    queue<TreeNode*>q;
    if(root==nullptr){
        return;
    }
    q.push(root);
    q.push(NULL);
    v2.push_back({});
    while(!q.empty()){
        TreeNode* x=q.front();
        q.pop();
        if(x!=NULL){
           v2[v2.size()-1].push_back(x->val);
           if(x->left){q.push(x->left);}
           if(x->right){q.push(x->right);}
        }
        else{
           if(!q.empty()){
              q.push(NULL);
              v2.push_back({});
           }
           cout<<endl;
        }
    }

}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v2;
        levelorder(v2,root);
        return v2;
    }
};