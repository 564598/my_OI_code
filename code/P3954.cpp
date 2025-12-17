#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int a , b , c;
        cin >> a >> b >> c;
        cout << (int)(a * 0.2 + b * 0.3 + c * 0.5);
        return 0;
    }
}
int main()
{
    return AC::A1();
}