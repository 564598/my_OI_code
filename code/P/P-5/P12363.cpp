#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        char s[50] = "WHERETHEREISAWILLTHEREISAWAY";
        bool p = 1;
        while ( p )
        {
            int i = 0;
            p = 0;
            while ( s[i + 1] != '\0' )
            {
                if ( s[i] > s[i + 1] )
                {
                    swap(s[i] , s[i + 1]);
                    p = 1;
                }
                i ++;
            }
        }
        cout << s;
        return 0;
    }
}
int main()
{
    return AC::A1();
}