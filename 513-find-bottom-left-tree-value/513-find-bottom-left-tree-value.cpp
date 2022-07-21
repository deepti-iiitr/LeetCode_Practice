/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int findBottomLeftValue(TreeNode *root)
        {
            queue<TreeNode*> q;
            q.push(root);
            int ans = root->val;

            while (!q.empty())
            {
                int size = q.size();
                for (int itr = 0; itr < size; itr++)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    if (itr == 0) ans = temp->val;
                    if (temp->left) q.push(temp->left);
                    if (temp->right) q.push(temp->right);
                }
            }
            return ans;
        }
};