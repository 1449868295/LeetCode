/*************************************************************************
	> File Name: LeetCode-110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时06分02秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
* };
*/

/*int Depth(struct TreeNode *root) {
 *   if (root == NULL) return 0;
 *   int l = Depth(root->left), r = Depth(root->right);
 *   return (l > r ? l : r) + 1;
 *}
 *
 *bool isBalanced(struct TreeNode* root){
 *   if (root == NULL) return true;
 *   int l = Depth(root->left), r = Depth(root->right);//左右子树深度
 *   if (abs(l - r) > 1) return false;
 *   return isBalanced(root->left) && isBalanced(root->right);
 *}*/

int Depth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int l = Depth(root->left), r = Depth(root->right);
    if (l == -2 || r == -2 || abs(l - r) > 1) return -2;
    return (l > r ? l : r) + 1;
}

bool isBalanced(struct TreeNode* root){
    return Depth(root) >= 0;
}
