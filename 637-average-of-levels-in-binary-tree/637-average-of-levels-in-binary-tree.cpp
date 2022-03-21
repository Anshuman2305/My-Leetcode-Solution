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
    vector<double> averageOfLevels(TreeNode* root) { //breadth first search
        vector<double> result;
        if(root == NULL) return result;
        double level_sum = 0;
        
        queue<TreeNode*> q; //queue containing every elements of each level
        q.push(root);
        
        while(!q.empty())
        {
            level_sum = 0;
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                TreeNode* current_node = q.front();
                q.pop();
                level_sum += current_node->val;
                
                if(current_node->left != NULL) q.push(current_node->left);
                if(current_node->right != NULL) q.push(current_node->right);
            }
            double level_avg = level_sum / size;
            result.push_back(level_avg);
        }
        
        return result;
    }
};