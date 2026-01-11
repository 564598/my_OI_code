#include <iostream>
#include <cstdio>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        long long a , b , c;
        cin >> a >> b >> c;
        printf("%8lld %8lld %8lld" , a , b , c);
        return 0;
    }
}

int main()
{
    return AC::A1();
}