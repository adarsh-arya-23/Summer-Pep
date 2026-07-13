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
    int maxLevelSum(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        int max_sum = INT_MIN;
        int max_level = 1;
        int current_level = 1;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int level_size = q.size();
            int current_level_sum = 0;
            while (level_size > 0) {
                TreeNode* curr = q.front();
                q.pop();
                current_level_sum += curr->val;
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
                level_size--;
            }
            if (current_level_sum > max_sum) {
                max_sum = current_level_sum;
                max_level = current_level;
            }
            current_level++;
        }
        return max_level;
    }
};