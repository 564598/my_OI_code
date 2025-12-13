#include <iostream>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        cout << "Hello,World!";
        return 0;
    }
}
int main()
{
    return AC::A1();
}