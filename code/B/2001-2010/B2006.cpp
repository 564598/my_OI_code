#include <iostream>
#include <iomanip>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        double x , a , y , b;
        cin >> x >> a >> y >> b;
        cout << fixed << setprecision(2) << (b * y - a * x) / (b - a);
        return 0;
    }
}

int main()
{
    return AC::A1();
}