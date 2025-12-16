#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double t;
        int n;
        cin >> t >> n;
        cout << fixed << setprecision(3) << t / n;
        cout << endl;
        cout << n * 2;
        return 0;
    }
}
int main()
{
    return AC::A1();
}