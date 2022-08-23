/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int widthOfBinaryTree(TreeNode *root)
        {
            if (root == NULL)
                return 0;
            queue<pair<TreeNode*, int>> q;
            q.push({ root,0 });
            int result = 1;

            while (!q.empty())
            {

                int len = q.size();
                int start = q.front().second;
                int end = q.back().second;
                result = max(result, end - start + 1);

                for (int i = 0; i < len; i++)
                {
                    pair<TreeNode*, int> temp = q.front();
                    int index = q.front().second - start;
                    q.pop();
                    if (temp.first->left)
                        q.push({ temp.first->left,(long long) 2 *index + 1 });
                    if (temp.first->right)
                        q.push({ temp.first->right,(long long) 2 *index + 2 });

                }
            }
            return result;
        }
};