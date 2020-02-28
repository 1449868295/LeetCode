/*************************************************************************
	> File Name: leetcode-234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时01分08秒
 ************************************************************************/
/**
* Definition for singly-linked list.
* struct ListNode {
* int val;
* struct ListNode *next;
* };
*/

int get_length (struct ListNode *head) {//计算链表长度
    int n = 0;
    while (head) n += 1, head = head->next;
    return n;
}

struct ListNode *reverse(struct ListNode *head, int n) {//翻转链表
    struct ListNode ret, *p = head, *q;
    while (n--) p = p->next;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *p = head, *q = reverse(head, (len + 1) / 2);//链表一分为二，p从前向后遍历， q从翻转后的头节点遍历 len+1上取整
    while (q) {
        if (p->val - q->val) return false;
        p = p->next;
        q = q->next;
    }
    return true;
}
