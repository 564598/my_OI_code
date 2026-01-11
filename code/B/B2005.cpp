#include <iostream>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        char c;
        cin >> c;
        cout << "  " << c << endl;
        cout << " " << c << c << c << endl;
        cout << c << c << c << c << c;
        return 0;
    }
}

int main()
{
    return AC::A1();
}