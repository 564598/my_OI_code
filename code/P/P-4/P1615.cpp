#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int h1 , h2 , m1 , m2 , s1 , s2;
        scanf("%d:%d:%d\n%d:%d:%d" , &h1 , &m1 , &s1 , &h2 , &m2 , &s2);
        int time1 = h1 * 3600 + m1 * 60 + s1;
        int time2 = h2 * 3600 + m2 * 60 + s2;
        long long n;
        scanf("%lld" , &n);
        cout << n * ( time2 - time1 );
        return 0;
    }
}
int main()
{
    return AC::A1();
}