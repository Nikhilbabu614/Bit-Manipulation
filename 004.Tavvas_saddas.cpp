// You are given a lucky number n. Lucky numbers are the positive integers whose decimal
// representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 
// are lucky and 5, 17, 467 are not.
// If we sort all lucky numbers in increasing order, what's the 1-based index of n?
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    string x = to_string(n);
    int dig = x.length();
    long long ans = (1<<dig)-2;
    //count - position
    for(long long i=dig-1,count=0;i>=0;i--,count++){
        if(x[i]=='7')
            ans+=(1<<count);
    }
    return ans+1;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
