/*************************************************************************
	> File Name: leetcode-142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 14时01分40秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
*};
*/
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return NULL;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return NULL;
        q = q->next; 
    } while (p != q);//快慢指针判断有无环
    int cnt = 0;
    do {
        cnt++;
        p = p->next;
    } while (p != q);//计算链表长度
    p = head, q= head;
    while (cnt--) q = q->next;
    while (p != q) p = p->next, q = q->next;//此时相遇位置为环的第一个节点
    return p;
}
