#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int s,v,t , T , H , M;
        cin >> s >> v;
        t =ceil(1.0 * s / (v * 1.0));
        t += 10;
        // 接下来才是难点：时间转换
        T = 60 * (24 + 8);
        T -= t;
        H = T / 60 % 24;
        M = T % 60;
        printf("%02d:%02d",H,M);
        return 0;
    }
}
int main()
{
    return AC::A1();
}