#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n , s = 0;
        cin >> n;
        int d = 0;
        for ( int i = 1 ; i <= n ; i ++ )
        {
            for ( int j = 1 ; j <= i ; j ++ )
            {
                // cout << i << endl;
                s += i;
                d ++;
                if ( d == n )
                {
                    cout << s;
                    return 0;
                }
            }
        }
    }
}
int main()
{
    return AC::A1();
}