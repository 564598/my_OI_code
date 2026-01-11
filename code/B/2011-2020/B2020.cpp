#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int a , b , c , d , e , sum = 0;
        cin >> a >> b >> c >> d >> e;
        sum+=a%3;b+=a/3;e+=a/3;a/=3;
        sum+=b%3;c+=b/3;a+=b/3;b/=3;
        sum+=c%3;d+=c/3;b+=c/3;c/=3;
        sum+=d%3;e+=d/3;c+=d/3;d/=3;
        sum+=e%3;a+=e/3;d+=e/3;e/=3;
        cout << a << " " << b << " " << c << " " << d << " " << e << endl << sum;
        return 0;
    }
}
int main()
{
    return AC::A1();
}