#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        char c[4];
        scanf("%s" , c);
        printf("%c%c%c" , c[2] , c[1] , c[0]);
        return 0;
    }
}
int main()
{
    return AC::A1();
}