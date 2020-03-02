/*************************************************************************
	> File Name: LeetCode-112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时14分06秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *    int val;
 *    struct TreeNode *left;
 *    struct TreeNode *right;
 *};
 */

bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return root->val == sum;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);

}
