//power set
void solve(string s){
    int n = s.length();
    int power = (1<<n) - 1;
    for(int i=1;i<=power;i++){
        int temp=i,j=0;
        while(temp>0){
            if(temp&1)cout<<s[j];
            j++;
            temp=temp>>1;
        }
        cout<<endl;
    }
}