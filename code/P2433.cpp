#include <bits/stdc++.h>
namespace AC
{
    using namespace std;
    int A1(void)
    {
        int T;
        cin >> T;
        if (T == 1) {
            cout << "I love Luogu!";
        } else if (T == 2) {
            cout << "6 4";
        } else if (T == 3) {
            cout << "3\n12\n2";
        } else if (T == 4) {
            cout << "166.667";
        } else if (T == 5) {
            cout << "15";
        } else if (T == 6) {
            cout << sqrt(6*6+9*9);
        } else if (T == 7) {
            cout << "110\n90\n0";
        } else if (T == 8) {
            double pi = 3.141593;
            cout << 2*pi*5 << endl;
            cout << pi*5*5 << endl;
            cout << 4.0/3.0*pi*5*5*5;
        } else if (T == 9) {
            cout << "22";
        } else if (T == 10) {
            cout << "9";
        } else if (T == 11) {
            cout << 100.0/3.0;
        } else if (T == 12) {
            cout << "13\nR";
        } else if (T == 13) {
            double pi = 3.141593;
            double v = 4.0/3.0*pi*(4*4*4+10*10*10);
            cout << (int)pow(v,1.0/3.0);
        } else if (T == 14) {
            cout << "50";
        }
        return 0;
    }
}
int main()
{
    return AC::A1();
}