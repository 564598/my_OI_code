#include <bits/stdc++.h>
namespace WA_4_AC_6
{
    using namespace std;
    int A1(void)
    {
        double x;
        cin >> x;
        if ( x >= 0 )
        {
            cout << floor(x);
        }
        else
        {
            cout << ceil(x);
        }
        return 0;
    }
}
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double x;
        cin >> x;
        if ( x >= 0 )
        {
            cout << (long long)floor(x);
        }
        else
        {
            cout << (long long)ceil(x);
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}