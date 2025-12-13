#include<bits/stdc++.h>
namespace AC
{
    using namespace std;
    bool A1_pr(int y)
    {
        if ( y % 4 == 0 )
        {
            if ( y % 400 == 0 )
            {
                return 1;
            }
            else if ( y % 100 == 0 )
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }
    }

    int A1_yf(int m,int y)
    {
        if ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
        {
            return 31;
        }
        else if ( m == 2 )
        {
            if (A1_pr(y))
            {
                return 29;
            }
            else 
            {
                return 28;
            }
        }
        else
        {
            return 30;
        }
    }

    int A1(void)
    {
        int days;
        int year,mouth,day,hour,k;
        cin >> year >> mouth >> day >> hour >> k;
        if ( hour + k < 24 )
        {
            cout << year << " " << mouth << " " << day << " " << hour + k ;
            return 0;
        }
        else
        {
            day ++;hour = hour + k - 24;
            days = A1_yf(mouth,year);
            if ( day > days )
            {
                mouth ++;day = day % days;
                if ( mouth == 13 )
                {
                    mouth = 1;year ++;
                }
            }
        }
        cout << year << " " << mouth << " " << day << " " << hour ;
        return 0;
    }
}

int main()
{
    return AC::A1();
}