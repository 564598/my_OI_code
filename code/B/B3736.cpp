#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    void swap(int &a , int &b)
    {
        int p = a;
        a = b;
        b = p;
    }
    int gcd( int a , int b )
    {
        if ( a < b )
        {
            swap(a , b);
        }
        while ( a % b != 0 )
        {
            a = a % b;
            swap(a , b);
        }
        return b;
    }
    int A1(void)
    {
        int x , y , z;
        cin >> x >> y >> z;
        cout << gcd(gcd(x , y) , z);
        return 0;
    }
}
int main()
{
    return AC::A1();
}