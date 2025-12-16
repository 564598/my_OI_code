#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        char c;
        cin >> c;
        cout << (char)(c - ('a'-'A'));
        return 0;
    }
}
int main()
{
    return AC::A1();
}