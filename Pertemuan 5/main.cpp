#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Menghitung luas lingkaran
    float luas, phi=3.14;
    int r;

    cout<<"Masukan jari-jari : ";
    cin>>r;

    luas=phi*r*r;

    cout<<"Luas Lingakaran = "<<luas<<endl;

    getch();

    //Menghitung luas persegi panjang
    int p,l;

    cout<<"Masukan nilai panjang = ";
    cin>>p;
    cout<<"Masukan nilai lebar = ";
    cin>>l;
    cout<<"Luas Persegi Panjang = ";cout<<(p*l);

    getch();
}
