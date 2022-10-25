#include <bits/stdc++.h>
using namespace std;

int main()
{
    bitset<2> a;
    a[0]=0;
    a[1]=1;
    cout<<a<<endl;
    
    
    //Integer to bitset
    bitset<4> a(8);
    cout<<a<<endl;
    //Bitset to integer
    int n = a.to_ulong();
    cout<<n<<endl;
    


    //string to Bitset
    string s = "00101111";
    bitset<10> a(s);
    cout<<a[0]<<endl; //from end side 
    cout<<a<<endl;
    //Bitset to string
    string res = a.to_string();
    cout<<res<<endl;

    
    //count no of set bits
    bitset<4> a(9);
    cout<<a.count()<<endl; //1001 - 2
    
    
    // Basic operations
    bitset<4> a(string("0101"));
    bitset<4> b(string("1010"));
    cout << (a & b) << '\n'; // 0000 
    cout << (a | b) << '\n'; // 1111 
    cout << (a ^ b) << '\n'; // 1111
    cout << (~a) << '\n'; // 1010 
    cout << (a << 1) << '\n'; // 1010 
    cout << (b >> 1) << '\n'; // 0101 
    
    
    string str1 = "1010110100";
    istringstream stream(str1);
    bitset<2> s1;
    bitset<6> s2; 
    stream >> s1; 
    cout << s1 << '\n'; // 10
    stream >> s2; 
    cout << s2 << '\n'; // 101101 
    


    // // Check if any bit is set
    bitset<4> a1(string("1010"));
    bitset<4> b1(string("0000"));
    cout << a1.any() << '\n'; // true 
    cout << b1.any() << '\n'; // false



    // Check if none of the bits are set
    cout << a1.none() << '\n'; // false 
    cout << b1.none() << '\n'; // true



    // Check if all bits are set
    bitset<4> ball(string("1111"));
    cout << ball.all() << '\n'; // True
    


    //Flip all or any particular bit:
    bitset<4> a3(string("1010")); 
    cout << a3.flip() << '\n'; // 0101 
    cout << a3 << '\n';
    cout << a3.flip(1) << '\n'; // 0111
    


     // Reset all or any particular bit:
    bitset<4> a4(string("1010"));
    cout << a4.reset(1) << '\n'; // 1000
    cout << a4.reset() << '\n'; // 0000



    // Set all or any particular bit:
    bitset<4> a5(string("1010"));
    cout << a5.set(0) << '\n'; // 1011
    cout << a5.set() << '\n'; // 0000
    
    return 0;
}