#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n , a[10] , s = 0;
        for ( int i = 0  ; i < 10 ; i ++ )
        {
            cin >> a[i];
        }
        cin >> n;
        n += 30;
        for ( int i = 0 ; i < 10 ; i ++ )
        {
            if ( a[i] <= n )
            {
                s++;
            }
        }
        cout << s;
        return 0;
    }
}
int main()
{
    return AC::A1();
}