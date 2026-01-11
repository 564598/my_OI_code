#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n = 0 , maxn = -1 , a , b;
        for ( int i = 1 ; i <= 7 ; i ++ )
        {
            cin >> a >> b;
            if ( a + b > maxn && a + b > 8)
            {
                maxn = a + b;
                n = i;
            }
        }
        cout << n;
        return 0;
    }
}
int main()
{
    return AC::A1();
}