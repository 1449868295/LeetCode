/*************************************************************************
	> File Name: leetcode-202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 15时41分46秒
 ************************************************************************/
int get_next(int x) {
        int temp = 0;
    while (x) {
        temp += (x % 10) * (x % 10);
         x /= 10;             
    }
    return temp;
 }

bool isHappy(int n){//快慢指针
    int p = n, q = n;
    while (q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (p == q) break;//判断是否有环                     
    }
    return (q == 1);
}
