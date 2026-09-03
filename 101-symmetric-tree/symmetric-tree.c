/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool ismirror(struct TreeNode* right,struct TreeNode* left)
{


    if(right==NULL && left==NULL)
    {
        return true;
    } 

    if(right==NULL || left==NULL)
    {
         return false;
    }
    
    if(right->val != left->val)
    {
        return false;
    }

    return ismirror(right->left,left->right)&&ismirror(right->right,left->left);


}

bool isSymmetric(struct TreeNode* root) 
{

    if (root == NULL)
    return true;

    return ismirror(root->right, root->left);

}