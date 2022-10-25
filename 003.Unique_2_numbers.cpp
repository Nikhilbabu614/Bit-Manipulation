vector<int> singleNumber(vector<int> arr)
{
    int N = arr.size();
    int res = 0;
    for (int i = 0; i < N; i++)
        res ^= arr[i];
    int p = 0;
    while (res > 0)
    {
        if (res & 1 == 1)
            break;
        p++;
        res = res >> 1;
    }
    int e1 = 0, e2 = 0;
    for (int i = 0; i < N; i++)
    {
        int ele = arr[i];
        if (ele & (1 << p))
            e1 ^= ele;
        else
            e2 ^= ele;
    }
    return {e1, e2};
}