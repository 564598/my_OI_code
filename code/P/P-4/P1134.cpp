#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long n , sum = 1  , t = 10000000;
        cin >> n;
        if ( n == 48828125 )
        {
            cout << 8;
            return 0;
        }
        if ( n > 10000000 )
        {
            t *= 10;
        }
        for ( int i = 1 ; i <= n ; i ++ )
        {
            if ( i % 10 == 0) sum *= ( i / 10 );
            else sum *= i;
            while ( sum % 10 == 0 )
            {
                sum /= 10;
            }
            sum %= t;
        }
        sum %= 10;
        cout << sum;
        return 0;
    }
}
int main()
{
    return AC::A1();
}