int _strlen_recursion(char *s);
int helper(char *str, int st, int en);

int is_palindrome(char *s)
{
    return helper(s, 0, _strlen_recursion(s) - 1);
}

int helper(char *str, int st, int en)
{
    if (st > en)
        return 1;
    else if (str[st] != str[en])
        return 0;

    return (helper(str, st + 1, en - 1));
}

int _strlen_recursion(char *s)
{
    if (s[0] == '\0')
    {
        return (0);
    }

    return (1 + _strlen_recursion(s + 1));
}