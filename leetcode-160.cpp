/*************************************************************************
	> File Name: leetcode-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 14时05分28秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
*};
*/
 
/*
*#define swap(a, b) {\
*   typeof(a) __temp = a;\
*   a = b; b = __temp;\
*}

*struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {//令两指针分别从链表同一位置开始向前
*   int cntA = 0, cntB = 0;
*   struct ListNode *p = headA, *q = headB;
*   while (p) cntA++, p = p->next;//计算链表A长度
*   while (q) cntB++, q = q->next;//计算链表B长度
*   int m = cntA - cntB;
*   p = headA, q = headB;
*   if (m < 0) {
*       swap(p, q); 
*       m = -m;
*   }
*   while (m--) p = p->next;
*   while (p != q) {
*       p = p->next;
*       q = q->next;
*   }
*   return p;
*}*/

/*if (m > 0) {
*   while (m--) p = p->next;
*   while (p != q) {
*       p = p->next;
*       q = q->next;
*   }
*} else {
*   while (m++) q = q->next;
*   while (p != q) {
*        p = p->next;
*       q = q->next;
*   }
*}*/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {//走两遍
    struct ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}
