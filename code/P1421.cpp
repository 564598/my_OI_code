#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double a , b;
        cin >> a >> b;
        cout << floor((a + 0.1 * b) / 1.9);
        return 0;
    }
}
int main()
{
    return AC::A1();
}