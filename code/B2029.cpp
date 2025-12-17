#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int h , r;
        cin >> h >> r;
        cout << ceil(20 / (3.14 * r * r * h / 1000));
        return 0;
    }
}
int main()
{
    return AC::A1();
}