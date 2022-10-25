int solve(vector<int> a){
    vector<int> v(32,0);
    for(int i : a){
        int pos=0;
        while(i>0){
            v[pos]+=(i&1);
            pos++;
            i=i>>1;
        }
    }
    int ans=0,p=1;//p-> 2 power 0
    for(int i=0;i<v.size();i++){
        v[i]%=3;
        ans+=pos*v[i];
        pos=pos<<1;
    }
    return ans;
}