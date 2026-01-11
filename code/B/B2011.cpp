#include <iostream>
#include <iomanip>
#include <cstdio>

namespace AC
{
    using namespace std;
    int A1(void)
    {
        double a , b;
        cin >> a >> b;
        cout << fixed << setprecision(9) << a / b;
        return 0;
    }
    int A2(void)
    {
        double a , b;
        scanf("%lf %lf",&a,&b);
        printf("%.9lf" , a / b);
        return 0;
    }
}
int main()
{
    return AC::A1();
}