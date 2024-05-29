bool is_prime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}