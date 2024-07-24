int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion ...
 */
int _sqrt_recursion(int n)
{
    return sqrt_helper(n, 1);
}

/**
 * sqrt_helper ...
 */
int sqrt_helper(int n, int i)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else if (i * i == n)
        return i;
    else if (i * i > n)
        return -1;

    sqrt_helper(n, i + 1);
}