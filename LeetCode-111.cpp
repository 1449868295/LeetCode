/*************************************************************************
	> File Name: LeetCode-111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时10分21秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
*};
*/

int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL || root->right == NULL) {
        return minDepth(root->left ? root->left : root->right) + 1;        
    }
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}
