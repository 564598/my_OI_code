#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    void strcopy(char* a , char* b)
    {
        for ( int i = 0 ; i < 25 ; i ++ )
        {
            b[i] = a[i];
        }
    }
    int A1(void)
    {
        char name[25] , maxname[25];
        int test_c , class_c , wen;
        char xue , xi;
        int maxm = -1 , summ = 0;
        int n;
        int sum = 0;
        cin >> n;
        for ( int i = 0 ; i < n ; i ++ )
        {
            sum = 0;
            scanf("%s %d %d %c %c %d" , name , &test_c , &class_c , &xue , &xi , &wen);
            if ( test_c > 80 && wen >= 1)
            {
                sum += 8000;
            }
            if ( test_c > 85 && class_c > 80 )
            {
                sum += 4000;
            }
            if ( test_c > 90 )
            {
                sum += 2000;
            }
            if ( test_c > 85 && xi == 'Y' )
            {
                sum += 1000;
            }
            if ( class_c > 80 && xue == 'Y' )
            {
                sum += 850;
            }
            if ( sum > maxm )
            {
                strcopy(name , maxname);
                maxm = sum;
            }
            // cout << sum << endl;
            summ += sum;
        }
        printf("%s\n%d\n%d" , maxname , maxm , summ);
        return 0;
    }
}
int main()
{
    return AC::A1();
}