#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long n , a[50];
        cin >> n;
        a[0] = 1;
        a[1] = 1;
        for ( int i = 2 ; i < n ; i ++ )
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[n - 1] << ".00";
        return 0;
    }
}
int main()
{
    return AC::A1();
}