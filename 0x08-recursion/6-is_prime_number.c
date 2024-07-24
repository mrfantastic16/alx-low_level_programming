int helper(int n, int i);

int is_prime_number(int n)
{
    return helper(n, 2);
}

int helper(int n, int i)
{
    if (n < 2)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % i == 0)
        return 0;
    else if (i * i > n)
        return 1;

    return (helper(n, i + 1));
}