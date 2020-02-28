/*************************************************************************
	> File Name: leetcode-206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 15时45分37秒
 ************************************************************************/
/**
*Definition for singly-linked list.
*struct ListNode {
*   int val;
*   struct ListNode *next;
*};
*/


struct ListNode* reverseList(struct ListNode* head){//头插法
    struct ListNode ret, *q, *p;
    ret.next = NULL;
    p = head;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;                                                    
    }
    return ret.next;
}
