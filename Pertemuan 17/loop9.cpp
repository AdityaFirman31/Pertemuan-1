#include <iostream>

using namespace std;

int main ()
{
    int x,i = 0,sum = 0;
    cout << " Input Bilangan : " ;
    cin >> x;
    while ( x != 9999)
    {
        cout << " " << x << endl;
        sum = sum+x;
        i = i+1;
        cout << " Input Bilangan : " ;
        cin >>x;
    }
    cout << " Jumlah Angka = " << sum <<endl;
    cout << " Jumlah Cacah Angka = " << i <<endl;
    return 0;
}
