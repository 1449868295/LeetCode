/*************************************************************************
	> File Name: leetcode-141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 13时59分13秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
*};
*/

bool hasCycle(struct ListNode *head) {//快慢指针 两指针相遇证明链表有环
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false;
        q = q->next;            
    } while (p != q);
    return true;
}
