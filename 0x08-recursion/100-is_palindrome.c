int _strlen(char *str);
int helper(char *str, int st, int en);

int is_palindrome(char *s)
{
    return helper(s, 0, _strlen(s) - 1);
}

int helper(char *str, int st, int en)
{
    if (st > en)
        return 1;
    else if (str[st] != str[en])
        return 0;

    return (helper(str, st + 1, en - 1));
}

int _strlen(char *str)
{
    int i = 0, j;

    for (j = 0; str[j]; j++)
        i++;
    return i;
}