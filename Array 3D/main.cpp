#include <iostream>

using namespace std;

int main ()
{
    int love = 0, you = 1, li = 0, sa = 0;
    int hm[3][2][2];
    float rata_rata;

    for ( int o = 0; o < 3; o++){
        for ( int k = 0; k < 2; k++){
             for ( int e = 0; e < 2; e++){
            hm[o][k][e] = sa;
            sa += 2;
            cout << sa << " ";
            li += sa;
            love += you;
            rata_rata = (float)li / love;
             }
        }
    }
    cout << "\n";
    cout << " Sum kelipatan 4 = " << li << endl;
    cout << " Rata-rata sum kelipatan 4 = " << rata_rata << endl;
    return 0;
}
