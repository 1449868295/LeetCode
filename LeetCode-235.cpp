/*************************************************************************
	> File Name: LeetCode-235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月02日 星期一 15时18分42秒
 ************************************************************************/
/**
* Definition for a binary tree node.
* struct TreeNode {
*    int val;
*    struct TreeNode *left;
*    struct TreeNode *right;
*};
*/

/*struct TreeNode *__lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
*    if (root->val == p->val) return p;
*    if (root->val == q->val) return q;
*    if (root->val > p->val && root->val < q->val) return root;
*    if (q->val > root->val) return __lowestCommonAncestor(root->right, p, q);
*    return __lowestCommonAncestor(root->left, p, q);
*}

*struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
*    if (root == NULL) return NULL;
*    if (p->val == q->val) return p;
*    if (p->val > q->val ) {//p为值较小的那个节点
*       struct TreeNode *temp = p;
*       p = q;
*       q = temp;
*    }
*    return __lowestCommonAncestor(root, p, q);
*}*/

/*struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
*    if (root == NULL) return NULL;
*    if (((root->val - p->val) * (root->val - q->val)) <= 0) return root;//pq是否在root两端
*    if (root->val > p->val) {
*       return lowestCommonAncestor(root->left, p, q);
*    } else {
*       return lowestCommonAncestor(root->right, p, q);  *                                     
*    }
}*/

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left, p, q);
    else if (p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right, p, q);
    return root;
}
