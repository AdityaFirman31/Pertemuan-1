#include <iostream>

using namespace std;

int main()
{

    cout << "==Daftar Jurusan==" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. Desain Komunikasi Visual" << endl;
    cout << "\n";

    cout << "==Kategori Mahasiswa==" <<endl;
    cout << "1. Semester 1-2 = Freshman" <<endl;
    cout << "2. Semester 3-4 = Sophomore" << endl;
    cout << "3. Semester 5-6 = Junior" << endl;
    cout << "4. Semester 7-8 = Senior" << endl;
    cout << "\n";

    int x,y;

    cout << "\nMasukan Jurusan Anda : " ;
    cin >> x;
     if ( x == 1){
        cout << " Jurusan anda adalah Teknik Informatika" << endl;
    }else if ( x == 2){
        cout << " Jurusan anda adalah Sistem Informasi" << endl;
    }else if ( x == 3){
        cout << " Jurusan anda adalah Desain Komunikasi Visual" << endl;
    }else{
    cout << " Data yang anda masukkan salah" << endl;
    }

    cout << "\nMasukan  Semester Anda : " ;
    cin >> y;
     if ( y >0 && y <3){
        cout << " Anda dalam kategori freshman year" << endl;
    }else if ( y >2 && y <5 ){
        cout << " Anda dalam kategori Sophomore year" << endl;
    }else if ( y >4 && y <7){
        cout << " Anda dalam kategori Junior year" << endl;
    }else if ( y >6 && y <9){
        cout << " Anda dalam kategori Senior year" << endl;
    }else{
    cout << "Data yang anda masukkan salah" << endl;
    }



    return 0;
}
