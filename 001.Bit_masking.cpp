// /,* -- o(n2) TC
// % - o(n3) TC
// Bitwise op - o(n) TC

// Duplicate number
int solve(vector<int> v)
{
    int ans = 0;
    for (int i : v)
        ans ^= i;
    return ans;
}

// 2's complement
int x = 20;
int y = ~x + 1; // y= -20;


// odd or even
int x = 5;
if (x & 1)
    cout << "odd";
else
    cout << "even";


// min no of bits to make a -> b;
int solve(int a,int b){
    int x = a^b;
    int count=0;
    while (x>0)
    {
        if(x&1==1)count++;
        x=x>>1;
    }
    return count;
}


//count no of bits
int setBits(int x){
    int count=0;
    while (x>0)
    {
        count+=x&1;
        x=x>>1;
    }
    return count;
}


//removing the last set bit
n = n&(n-1);


//swapping two numbers 
void swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
}

//extract i-th bit
int solve(int n,int i){
    return n&(1<<i);
}

//set i-th bit
int solve(int n,int i){
    return n|(1<<i);
}

//clear ith bit
int solve(int n,int i){
    return n^(~(1<<i));
}
