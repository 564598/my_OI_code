#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int cint( char c )
    {
        return (int)(c) - (int)'0';
    }
    int A1(void)
    {
        int a[9] , s;
        char n[15];
        scanf("%s" , n);
        a[0] = cint(n[0]);
        for ( int i = 0 ; i < 3 ; i ++ )
        {
            a[i + 1] = cint(n[i + 2]);
        }
        for ( int i = 0 ; i < 5 ; i ++ )
        {
            a[i + 4] = cint(n[i + 6]);
        }
        if ( n[12] == 'X' ) s = 10;
        else s = cint(n[12]);
        int sum = 0;
        for ( int i = 0 ; i < 9 ; i ++ )
        {
            sum += ( a[i] * (i + 1) );
        }
        int zs = sum % 11;
        if ( s == zs )
        {
            cout << "Right";
        }
        else
        {
            for ( int i = 0 ; i < 12 ; i ++ )
            {
                cout << n[i];
            }
            if ( zs == 10 )
            {
                putchar('X');
            }
            else
            {
                cout << zs;
            }
        }
        // cout << endl << s;
        return 0;
    }
}
int main()
{
    return AC::A1();
}