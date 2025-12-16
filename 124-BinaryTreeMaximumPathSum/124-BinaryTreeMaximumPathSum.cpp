// Last updated: 16/12/2025, 23:15:53
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int pathsum(TreeNode* root,int &maxi){
15        if(root==NULL) return 0;
16        int leftpath=max(0,pathsum(root->left,maxi));
17        int rightpath=max(0,pathsum(root->right,maxi));
18        
19        maxi=max(maxi,leftpath+rightpath+root->val);
20        return max(leftpath,rightpath)+ root->val;
21    }
22    int maxPathSum(TreeNode* root) {
23        int maxi=INT_MIN;
24        pathsum(root,maxi);
25        return maxi;
26    }
27};