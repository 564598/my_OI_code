#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int a , b , c , d , t , h , m;
        cin >> a >> b >> c >> d;
        t = (c * 60 + d) - (a * 60 + b);
        h = t / 60;
        m = t % 60;
        cout << h << " " << m;
        return 0;
    }
}
int main()
{
    return AC::A1();
}