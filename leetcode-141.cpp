/*************************************************************************
	> File Name: leetcode-141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时15分21秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
*};
**/
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;//快慢指针
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false;
        q = q->next;        
    } while (p != q);//快慢指针相遇，链表有环
    return true;
}
