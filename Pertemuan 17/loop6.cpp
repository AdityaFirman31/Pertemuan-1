#include <iostream>

using namespace std;

int main ()
{
    int jml,maks,minim,nilai ;
    for ( int i = 1; i<= jml; i++){
        cout << " Masukan Nilai Anda = " ;
        cin >> nilai;
         if ( nilai == -99)
         break;
         else if ( i == 1){
             minim = nilai;
             maks = nilai;
        }else if ( minim > nilai){
               minim = nilai;
        }
        else if ( maks < nilai){
             maks = nilai;
        }
    }
    cout << " Max = " << maks << endl;
    cout << " Min = " << minim << endl;

    return 0;
}
