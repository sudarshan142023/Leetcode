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

    vector<TreeNode*> tree(int start, int end)
    {
        vector<TreeNode*> res;

        if(start>end)
        {
            res.push_back(nullptr);
            return res;
        }

        for(int i=start; i<=end; i++)
        {

            vector<TreeNode*> leftTrees = tree(start, i - 1);
            vector<TreeNode*> rightTrees = tree(i + 1, end);

            for(TreeNode* left : leftTrees)
            {
                for(TreeNode* right : rightTrees)
                {
                    TreeNode* root = new TreeNode(i);

                    root->left=left;
                    root->right = right;

                    res.push_back(root);
                }
            }
        }
        return res;

    }

    vector<TreeNode*> generateTrees(int n) 
    {
       return tree(1,n);
    }
};