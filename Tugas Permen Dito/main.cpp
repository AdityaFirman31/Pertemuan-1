#include <iostream>

using namespace std;

int main()
{
    int a = 5000;
    int x;
    int h;

    cin >> x;

    if ( x == 500){
        cout << " Dito membeli permen sebanyak 5 buah" << endl;
    }else if ( x == 1000 ) {
          h = a/x;
        cout << " Dito membeli permen sebanyak " << h << " buah" << endl;
    }else if ( x == 300){
        for ( int i = x; i <= a; i+=300){
            cout << i << " ";
        }
        cout << endl;
        cout << " Dito membeli permen sebanyak " << x/a << " buah" << endl;
    }else{
        cout << " Angka yang anda masukan salah " << endl;
    }

    return 0;
}
