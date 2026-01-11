#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double F;
        cin >> F;
        cout << fixed << setprecision(5) << 5.0 * (F - 32) / 9.0;
        return 0;
    }
}
int main()
{
    return AC::A1();
}