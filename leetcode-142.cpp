/*************************************************************************
	> File Name: leetcode-142.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 13时09分22秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
** };
**/
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return NULL;//快慢指针
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return NULL;
        q = q->next;         
    } while (p != q);
    int cnt = 0;
    do {//计算链表长度
        cnt++;
        p = p->next;           
    } while (p != q);
    p = head, q= head;
    while (cnt--) q = q->next;//pq有了环的长度差
    while (p != q) p = p->next, q = q->next;//这时相遇位置就是循环开始的第一个位置
    return p;
}
