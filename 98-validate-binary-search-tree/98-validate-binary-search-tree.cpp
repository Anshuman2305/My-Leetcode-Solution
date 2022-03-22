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
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return validate(root, prev);
    }
    bool validate(TreeNode* root, TreeNode* &prev) {//do Inorder traversal
        //1. find toward left until the end
        //2. set this leftest node as prev
        //3. check if prev(left) node is smaller than root
        //4. check right subtree
        if (root == NULL) return true; 
        if (!validate(root->left, prev)) return false;
        if (prev != NULL && root->val <= prev->val ) return false; //previous node is from left side, so it should be smaller than right side node
        prev = root; 
        return validate(root->right, prev);
    }
};