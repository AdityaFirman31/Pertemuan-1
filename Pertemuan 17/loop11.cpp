#include <iostream>

using namespace std;

int main ()
{
    int k;
    for ( int i = 1; i <=7; i++){
        cout << " input : " ;
        cin >> i;
        for ( int x = 1; x <= 10; x++){
            k = i * x;
            cout << x << " x " << i << " = " << k << endl;
        }
    }
    return 0;
}
