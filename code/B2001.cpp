#include <iostream>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long a , b;
        cin >> a >> b;
        cout << a + b;
        return 0;
    }
}
int main()
{
    return AC::A1();
}