#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int h , m , s;
        char c;
        cin >> h >> m >> s >> c;
        if ( c == 'P' ) h += 12;
        cout << h * 3600 + m * 60 + s;
        return 0;
    }
}
int main()
{
    return AC::A1();
}