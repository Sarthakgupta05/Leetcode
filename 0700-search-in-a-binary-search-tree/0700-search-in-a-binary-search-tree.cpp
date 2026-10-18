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
        TreeNode* temp;
        if(root->val==val)return root;
        else if(root->val<val) temp=root->right;
        else temp=root->left;

        while(temp!=NULL && temp->val!=val){
            if(temp->val<val) temp=temp->right;
            else temp=temp->left;
        }
        return temp;
        
    }
};