/*************************************************************************
	> File Name: LeetCode-104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时00分00秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
*};
*/

int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int l = maxDepth(root->left), r = maxDepth(root->right);
    return (l > r ? l : r) + 1;

}
