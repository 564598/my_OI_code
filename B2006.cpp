#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x , a , y , b;
    cin >> x >> a >> y >> b;
    cout << fixed << setprecision(2) << (b * y - a * x) / (b - a);
    return 0;
}