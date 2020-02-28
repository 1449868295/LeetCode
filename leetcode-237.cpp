/*************************************************************************
	> File Name: leetcode-237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时06分10秒
 ************************************************************************/
/**
* Definition for singly-linked list.
* struct ListNode {
* int val;
* struct ListNode *next;
* };
*/
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;    
    node->val = p->val;//用后面节点值覆盖node的值
    node->next = p->next;//删除node后面节点
    free(p);
    return ; 
}
