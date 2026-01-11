#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int sum = 0 , s = 0;
        int x;
        for ( int i = 1 ; i <= 12 ; i ++ )
        {
            s += 300;
            cin >> x;
            if ( x > s )
            {
                cout << -1 * i;
                return 0;
            }
            s -= x;
            sum += s / 100 * 100;
            s = s % 100;
        }
        cout << (int)(sum * 1.2 + s);
        return 0;
    }
}
int main()
{
    return AC::A1();
}