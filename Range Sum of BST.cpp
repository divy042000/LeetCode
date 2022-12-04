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
    int sum=0;
    int sumup(TreeNode *root,int low,int high)
    {
        if(root==NULL)
        {
         return 0;
        }
        //cout<<root->val<<" ";
        if(root->val>=low && root->val<=high)
        {sum=sum+root->val;}
        sumup(root->left,low,high);
        sumup(root->right,low,high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
    int totalsum=sumup(root,low,high);  
        return totalsum;
    }
};
