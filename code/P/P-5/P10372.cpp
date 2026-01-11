#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int n;
        int a , b , c;
        scanf("%d" , &n);
        for ( int i = 0 ; i < n ; i ++ )
        {
            scanf("%d+%d=%d" , &a , &b , &c);
            if ( a + b == c )
            {
                printf("Right!\n");
            }
            else
            {
                printf("Wrong!\n");
            }
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}