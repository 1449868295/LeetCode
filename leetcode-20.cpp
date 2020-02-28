/*************************************************************************
	> File Name: leetcode-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时29分24秒
 ************************************************************************/
bool isValid(char * s){
    int len = strlen(s);
    char *stack = (char *)malloc(sizeof(char) * len);
    int top = -1, flag = 1;//flag判断符号类型是否一致
    while (s[0]) {
        switch (s[0]) {
            case '(' :
            case '[' :
            case '{' : stack[++top] = s[0]; break;//遇到左括号就入栈
            case ')' : flag = (top != -1 && stack[top--] == '('); break;//判断符号是否相匹配
            case ']' : flag = (top != -1 && stack[top--] == '['); break;
            case '}' : flag = (top != -1 && stack[top--] == '{'); break;
        }
        if (!flag) break;//flag = 0中间匹配不合法
        s++;
    }
    free(stack);
    return (flag && top == -1);
}
