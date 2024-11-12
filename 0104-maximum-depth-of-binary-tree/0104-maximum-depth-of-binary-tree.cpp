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
   void traverse(TreeNode* root, int &maxDepth, int currDepth){
    if(!root){
        maxDepth = max(currDepth, maxDepth);
        return;
    }
    currDepth++;
    traverse(root->left , maxDepth, currDepth);
    traverse(root->right, maxDepth, currDepth);
   }
    int maxDepth(TreeNode* root) {
     int maxDepth = 0;
     traverse(root, maxDepth , 0);
     return maxDepth;
    }
};