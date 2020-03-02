/*************************************************************************
	> File Name: LeetCode-226.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时16分34秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
*};
*/

struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) return NULL;
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
