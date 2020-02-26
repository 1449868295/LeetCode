/*************************************************************************
	> File Name: leetcode-24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 11时51分19秒
 ************************************************************************/

/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    struct ListNode *next;
 *};
 **/

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode ret, *q, *p;
    ret.next = head;
    p = &ret;
    q = head;
    while (q && q->next) {
        p->next = q->next;//开始交换改链
            q->next = p->next->next;
            p->next->next = q;
            p = q;//交换完成，pq向下移动
            q = q->next; 
    }
    return ret.next;
}

