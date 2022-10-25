#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> a,vector<int> q){
    bitset<100> b;
    b[0]=1;
    for(int i : a)
        b|=(b<<i);
    for(int i : q)
        if(b[i]==1)
            cout<<i<<" exists"<<endl;
}

int main(){
    vector<int> a = {1,2,3,4};
    vector<int> q = {3,5,7,20,8};
    solve(a,q);
    return 0;
}