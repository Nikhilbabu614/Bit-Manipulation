// You are given a,b -- Find the total number of setbits in the numbers from a to b.
int solve(int x)
{
    int count = 0;
    while (x > 0)
    {
        count += x & 1;
        x = x >> 1;
    }
    return count;
}
int fun(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if ((i & 1) == 0 && i < b)
        {
            count += 2 * solve(i) + 1;
            i++;
            continue;
        }
        count += solve(i);
    }
    return count;
}