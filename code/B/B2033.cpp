#include <iostream>

namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long a , b;
        cin >> a >> b;
        cout << a * b;
        return 0;
    }

    int A2(void)
    {
        long long a , b , n = 0;
        cin >> a >> b;
        for ( int i = 0 ; i < a ; i ++ )
        {
            n += b;
        }
        cout << n;
        return 0;
    }
}

signed main()
{
    return AC::A1();
}