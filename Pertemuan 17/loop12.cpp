#include <iostream>

using namespace std;

int main ()
{
    float celcius,fahr;
    cout << "---------------------------" << endl ;
    cout << "Celcius       Fahrenheit " << endl ;
    cout << "---------------------------" << endl ;
    for (  celcius = 0; celcius <= 100; celcius++){
     fahr = ( celcius * 9/5)+32;
        cout << celcius << "      |          " << fahr <<  "    |" << endl;
    }
      cout << "----------------------------" << endl ;
    return 0;
}
