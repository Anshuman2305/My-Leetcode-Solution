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
    int minDepth(TreeNode* root) {
    if(root == NULL)
        return 0;
    queue < pair <TreeNode* , int> > q;
    q.push({root , 1});
    TreeNode* frontNode;
    int depth;
    while(!q.empty())
    {
        frontNode = q.front().first;
        depth = q.front().second;
        q.pop();
        if(frontNode->left == NULL && frontNode->right == NULL)
            return depth;
        if(frontNode->left != NULL)
            q.push({frontNode->left , depth + 1});
        if(frontNode->right != NULL)
            q.push({frontNode->right , depth + 1});
    }
    return -1;

    }
};