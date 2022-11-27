#include <iostream>

using namespace std;

int main ()
{
    int x,sum = 0;
    cout << " Input Bilangan : ";
    cin >> x;
    while ( x != 9999)
    {
     cout << " " << x << endl;
     sum = sum+x;
     cout << " Input Bilangan : ";
     cin >> x;
    }
    cout << " Jumlah Angka = " << sum << endl;
    return 0;
}
