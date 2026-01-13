#ifndef MYMATHS_HPP
#define MYMATHS_HPP
#include <cstdio>
#include <cstring>
#include <math.h>
#include <iostream>
namespace Maths
{
    namespace Big
    {
        struct INT
        {
            int num [4010];
            int len;
            bool zf = 1;
        };
        int LEN = 4010;
        int numlen(INT &a);
        void clear(INT &a)
        {
            for ( int i = 0 ; i < LEN ; i ++ )
            {
                (a.num)[i] = 0;
            }
            a.len = 0;
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
                num[0] = '0';
            }
            else if (num[0] == '-')
            {
                a.zf = 0;
                num[0] = '0';
            }
            else
            {
                a.zf = 1;
            }
            for ( int i = 0 ; i < len_str ; i ++ )
            {
                (a.num)[len_str - i - 1] = num[i] -'0';
            }
            a.len = numlen(a);
        }
        int numlen(INT &a)
        {
            int len = -1;
            for ( int i = LEN - 1 ; i >= 0 ; i -- )
            {
                if ( (a.num)[i] != 0 )
                {
                    len = i;
                    break;
                }
            }
            return len;
        }
        void output(INT &a)
        {
            int nlen = numlen(a);
            if ( nlen == -1 )
            {
                putchar('0');
            }
            else
            {
                if (!(a.zf))
                {
                    putchar('-');
                }
                for ( int i = nlen ; i >= 0 ; i -- )
                {
                    putchar((a.num)[i] + '0');
                }
            }
            putchar('\n');
        }
        void _add(INT &a , INT &b , INT &c)
        {
            clear(c);
            for ( int i = 0 ; i < LEN - 1 ; i ++ )
            {
                (c.num)[i] += (a.num)[i] + (b.num)[i];
                if ( (c.num)[i] >= 10 )
                {
                    (c.num)[i + 1] += 1;
                    (c.num)[i] -= 10;
                }
            }
            c.len = numlen(c);
        }
        void _sub(INT &a , INT &b , INT &c)
        {
            clear(c);
            for ( int i = 0 ; i < LEN - 1 ; i ++ )
            {
                (c.num)[i] += (a.num)[i] - (b.num)[i];
                if ( (c.num)[i] < 0 )
                {
                    (c.num)[i + 1] --;
                    (c.num)[i] += 10;
                }
            }
            c.len = numlen(c);
        }
        char cp(INT &a , INT &b) //cp是compare的缩写
        {
            int len_a = a.len;
            int len_b = b.len;
            if ( len_a > len_b )
            {
                return '>';
            }
            else if ( len_b > len_a )
            {
                return '<';
            }
            else
            {
                for ( int i = len_a - 1 ; i >= 0 ; i -- )
                {
                    if ( (a.num)[i] > (b.num)[i] )
                    {
                        return '>';
                    }
                    if ( (a.num)[i] < (b.num)[i] )
                    {
                        return '<';
                    }
                }
                return '=';
            }
        }
        void add(INT &a, INT &b, INT &c)
        {
            clear(c);
            if (a.zf == b.zf)
            {
                c.zf = a.zf;
                _add(a, b, c);
            }
            else
            {
                char cmp = cp(a, b);
                if (cmp == '>')
                {
                    c.zf = a.zf;
                    _sub(a, b, c);
                }
                else if (cmp == '<')
                {
                    c.zf = b.zf;
                    _sub(b, a, c);
                }
                else
                {
                    clear(c);
                    c.zf = 1;
                }
            }
        }
        void sub(INT &a , INT &b , INT &c)
        {
            INT B = b;
            B.zf = !(b.zf);
            add(a , B , c);
        }
        void s_mul(INT &a , int b , INT &c)
        {
            clear(c);
            for ( int i = 0 ; i < LEN - 1 ; i ++ )
            {
                (c.num)[i] += (a.num)[i] * b;
                if ( (c.num)[i] >= 10 )
                {
                    (c.num)[i + 1] += (c.num)[i] / 10;
                    (c.num)[i] %= 10;
                }
            }
            c.len = numlen(c);
        }
        int e10( int n )
        {
            int sum = 1;
            for ( int i = 1 ; i <= n ; i ++ )
            {
                sum *= 10;
            }
            return sum;
        }
        void mul(INT &a , INT &b , INT &c)
        {
            clear(c);
            if ( a.zf != b.zf )
            {
                c.zf = 0;
            }
            for ( int i = 0 ; i <= a.len ; i ++ )
            {
                if ((a.num)[i] == 0 )
                {
                    continue;
                }
                for ( int j = 0 ; j <= b.len ; j ++ )
                {
                    if ( (b.num)[j] == 0 )
                    {
                        continue;
                    }
                    (c.num)[i + j] += (a.num)[i] * (b.num)[j];
                }
            }
            for ( int i = 0 ; i < LEN - 1 ; i ++ )
            {
                if ( (c.num)[i] >= 10 )
                {
                    (c.num)[i + 1] += (c.num)[i] / 10;
                    (c.num)[i] %= 10; 
                }
            }
            c.len = numlen(c);
        }
    }
    void swap(int &a , int &b)
    {
        int p = a;
        a = b;
        b = p;
    }
    int gcd( int a , int b )
    {
        if ( a < b )
        {
            swap(a , b);
        }
        while ( a % b != 0 )
        {
            a = a % b;
            swap(a , b);
        }
        return b;
    }
    long long jc( int n )
    {
        long long sum = 1;
        for ( int i = 1 ; i <= n ; i ++ )
        {
            sum *= n;
        }
        return sum;
    }
}
#endif