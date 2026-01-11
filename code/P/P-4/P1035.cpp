#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double sum = 0;
        int k;
        int n = 0;
        cin >> k;
        do
        {
            n ++;
            sum += 1.0 / n;
        }
        while ( sum <= k );
        cout << n;
        return 0;
    }
}
int main()
{
    return AC::A1();
}