/*************************************************************************
	> File Name: LeetCode-100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 14时25分34秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
* };
*/


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val - q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);//判断两棵树左右子树是否相同
}
