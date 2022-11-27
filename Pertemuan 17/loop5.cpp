#include <iostream>

using namespace std;

int main ()
{

    cout << " Program ini akan berhenti jika anda menginputkan angka - 99" ;
    cout << endl;
    cout << endl;
    int i,jumlah;
    for ( i = 1 ; i <=jumlah; i--){
        cout << " Masukan Nilai Anda = ";
        cin >> jumlah;
        if ( i == -99)
            break;
    }
    return 0;
}
