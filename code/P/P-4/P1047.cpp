#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int T = 111111;
    int A1(void)
    {
        int a[T];
        int L , m;
        int u , v;
        cin >> L >> m;
        for ( int i = 0 ; i <= L ; i ++ )
        {
            a[i] = 1;
        }
        for ( int i = 1 ; i <= m ; i ++ )
        {
            cin >> u >> v;
            for ( int j = u ; j <= v ; j ++ )
            {
                a[j] = 0;
            }
        }
        int sum = 0;
        for ( int i = 0 ; i <= L ; i ++ )
        {
            sum += a[i];
        }
        cout << sum;
        return 0;       
    }
}
int main()
{
    return AC::A1();
}