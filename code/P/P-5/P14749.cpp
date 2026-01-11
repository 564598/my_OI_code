#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        string a , b , t;
        cin >> a >> b >> t;
        if ( t == "Rejected" )
        {
            cout << b << ' ' << a;
        }
        else
        {
            cout << a << " " << b;
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}