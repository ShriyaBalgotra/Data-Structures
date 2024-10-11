https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

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
    int helper(TreeNode* root, int& ans)
    {
        if(!root)
            return 0;
        int left = max(helper(root->left,ans),0); 
        int right = max(helper(root->right,ans),0);
        ans = max(ans,root->val+left+right);
        return root->val+max(left,right); // kadanes algo
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        vector<int> store;
        helper(root,ans);
        return ans;
    }
};
