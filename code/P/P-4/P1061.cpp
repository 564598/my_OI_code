#include <bits/stdc++.h>
namespace AC
{
    namespace Big
    {
        struct INT
        {
            int num [1004];
            bool zf;
        };
        int LEN = 1004;
        void clear(INT &a)
        {
            for ( int i = 0 ; i < LEN ; i ++ )
            {
                (a.num)[i] = 0;
            }
        }
        void input(INT &a)
        {
            char num[LEN + 1];
            scanf("%s" , num);
            int len_str = strlen(num);
            clear(a);
            if (num[0] == '+')
            {
                a.zf = 1;
            }
            else if (num[0] == '-')
            {
                a.zf = 0;
            }
            else
            {
                a.zf = 1;
            }
            for ( int i = 0 ; i < len_str ; i ++ )
            {
                (a.num)[len_str - i - 1] = num[i] -'0';
            }
        }
        void output(INT &a)
        {
            int numlen = -1;
            for ( int i = LEN - 1 ; i >= 0 ; i -- )
            {
                if ( (a.num)[i] != 0 )
                {
                    numlen = i;
                    break;
                }
            }
            if ( numlen == -1 )
            {
                putchar('0');
            }
            else
            {
                for ( int i = numlen ; i >= 0 ; i -- )
                {
                    putchar((a.num)[i] + '0');
                }
            }
            putchar('\n');
        }
        void add(INT &a , INT &b , INT &c) // a、b为加数，c为和储存地
        {
            clear(c);
            int j = 0;
            for ( int i = 0 ; i < LEN - 1 ; i ++ ) // 处理进到1004位，所以-1，不然溢出去了
            {
                (c.num)[i] = (a.num)[i] + (b.num)[i] + j;
                if ( (c.num)[i] >= 10 )
                {
                    j = (c.num)[i] / 10;
                    (c.num)[i] %= 10;
                }
                else
                {
                    j = 0;
                }
            }
        }
    }
    using namespace Big;
    int A1(void)
    {
        INT a , b , c;
        clear(a);
        input(a);
        input(b);
        add(a,b,c);
        output(c);
        return 0;
    }
}
int main()
{
    return AC::A1();
}