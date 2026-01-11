#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n;
        cin >> n;
        if ( n * 5 < n * 3 + 11 )
        {
            cout << "Local";
        }
        else
        {
            cout << "Luogu";
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}