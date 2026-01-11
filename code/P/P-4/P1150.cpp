#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long n , k;
        cin >> n >> k;
        cout << n + ( n - 1 ) / ( k - 1 );
        return 0;
    }
}
int main()
{
    return AC::A1();
}