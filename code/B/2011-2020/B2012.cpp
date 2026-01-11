#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double a , b;
        cin >> a >> b;
        printf("%.3lf%%" , b / a * 100);
        return 0;
    }
}
namespace WA
{
    using namespace std;
    int A1(void)
    {
        double a , b;
        cin >> a >> b;
        printf("%.3lf%" , b / a * 100);
        return 0;
    }
}

int main()
{
    return AC::A1();
}