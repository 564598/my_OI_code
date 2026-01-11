#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int a , b , sum = 0;
        cin >> a >> b;
        for ( int i = a + 1 ; i < b ; i ++ )
        {
            if ( ( i % 4 == 0 && i % 100 != 0) || i % 400 == 0 )
            {
                sum += i;
            }
        }
        cout << sum;
        return 0;
    }
}
int main()
{
    return AC::A1();
}