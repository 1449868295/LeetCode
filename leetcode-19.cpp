/*************************************************************************
	> File Name: leetcode-19.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 10时57分25秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 *  };
 **/


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next = head; //设置一个虚拟头节点ret
    p = q = &ret;//从虚拟头节点位置开始走
    while (n--) q = q->next;  
    q = q->next;
    while (q) {//q为空时，p在待删除节点的前一个节点
        p = p->next;
        q = q->next;     
    }
    q = p->next;//删除节点
    p->next = q->next;
    free(q);
    return ret.next;
}
