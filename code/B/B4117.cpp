#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
    	int a , b , c;
        cin >> a >> b >> c;
        cout << (a + b + c <= 21);
        return 0;
    }
}
int main()
{
    return AC::A1();
}