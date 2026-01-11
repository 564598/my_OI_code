#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    long long jc(long long n)
    {
        if ( n == 1 )
        {
            return 1;
        }
        return n * jc(n - 1);
    }
    int A1(void)
    {
        long long n;
        cin >> n;
        cout << jc(n);
        return 0;
    }
}
int main()
{
    return AC::A1();
}