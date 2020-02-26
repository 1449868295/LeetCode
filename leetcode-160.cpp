/*************************************************************************
	> File Name: leetcode-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 12时32分14秒
 ************************************************************************/

/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   struct ListNode *next;
 *};
**/
 
/*
 *#define swap(a, b) {\
 *  __typeof(a) __temp = a;\
 *  a = b; b = __temp;\
 *}
 *
 *struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {//对齐起始位置
 *   int cntA = 0, cntB = 0;
 *   struct ListNode *p = headA, *q = headB;
 *   while (p) cntA++, p = p->next;//A链表长度
 *   while (q) cntB++, q = q->next;//B链表长度
 *   int m = cntA - cntB;
 *   p = headA, q = headB;
 *   if (m < 0) {//pq指针交换位置
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
 *   while (m--) p = p->next;//对齐pq位置
 *   while (p != q) {
 *      p = p->next;
 *      q = q->next;
 *   }
 *} else {
 *    while (m++) q = q->next;
 *    while (p != q) {
 *    p = p->next;
 *    q = q->next;
 *    }
 *}*/

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {//走两遍  lAlB为链表相交前长度
    struct ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headB;//p是否为空 是就再从B走
        q = q ? q->next : headA;              
    }
    return p;
}
