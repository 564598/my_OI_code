#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    const double PI = 3.14159;
    int A1(void)
    {
        double r;
        cin >> r;
        printf("%.4f %.4f %.4f" ,2 * r , 2 * PI * r , PI * r * r);
        return 0;
    }
}
namespace WA
{
    using namespace std;
    const double PI = 3.14159;
    int A1(void)
    {
        double r;
        cin >> r;
        printf("%.4f %.4f %.4f" , r , 2 * PI * r , PI * r * r);
        return 0;
    }
}
int main()
{
    return AC::A1();
}