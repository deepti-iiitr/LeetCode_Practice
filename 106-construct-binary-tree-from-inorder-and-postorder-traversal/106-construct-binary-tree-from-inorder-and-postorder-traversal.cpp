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
        TreeNode* solve(vector<int> &in, vector<int> &po, int &i, int l, int r, int n)
        {

            if (l > r)
                return NULL;
            int index = -1;
            TreeNode *node = new TreeNode(po[i]);
            for (int j = l; j <= r; j++)
            {
                if (in[j] == po[i])
                {
                    index = j;
                    break;
                }
            }
            i--;
            node->right = solve(in, po, i, index + 1, r, n);
            node->left = solve(in, po, i, l, index - 1, n);
            return node;
        }
    TreeNode* buildTree(vector<int> &in, vector<int> &po)
    {
        int n = in .size();
        int i = n - 1;
        return solve(in, po, i, 0, n - 1, n);
    }
};