/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start
bool isValid(char *s)
{
    int n = strlen(s);
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '(':
            stack[++top] = ')';
            break;

        case '[':
            stack[++top] = ']';
            break;

        case '{':
            stack[++top] = '}';
            break;

        default:
            if (top == -1 || stack[top] != s[i])
                return false;
            top--;
        }
    }

    return top == -1;
}
// @lc code=end
