#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n;
        cin >> n;
        for ( int i = 0 ; i < n; i ++ )
        {
            cout << '|';
            for ( int j = 0 ; j < n - 2 ; j ++ )
            {
                if ( i == n / 2) cout << '-';
                else cout << 'a';
            }
            cout << '|' << endl;
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}