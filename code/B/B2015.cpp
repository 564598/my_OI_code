#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double r1,r2;
        cin >> r1 >> r2;
        cout << fixed << setprecision(2) << 1.0/(1.0/r1 + 1.0/r2);
        return 0;
    }
}
int main()
{
    return AC::A1();
}