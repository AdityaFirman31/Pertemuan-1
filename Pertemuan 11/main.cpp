#include <iostream>

using namespace std;

int main()
{

   int f_n;
   int f_n1;
   int f_n2;

   cout << " Program Deret Fibonacci Kurang Dari 100 " << endl;

   f_n1 = 0;
   f_n2 = 1;
    cout << f_n1 << " ";
    cout << f_n2 << " ";

   for( int i = 1; i < 11; i++){
    f_n  = f_n1 + f_n2;
    f_n1 = f_n2;
    f_n2 = f_n;
     cout << f_n << " ";
   }
    cout << "\n" << endl;

    return 0;
}
