#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1()
    {
        double a , b , c , p , S;
        cin >> a >> b >> c;
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(1) << S;
        return 0;
    }
}
int main()
{
    return AC::A1();
}