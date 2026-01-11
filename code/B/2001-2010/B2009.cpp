#include <iostream>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int a , b , c;
        cin >> a >> b >> c;
        cout << (a + b) / c;
        return 0; 
    }
}
int main()
{
    return AC::A1();
}