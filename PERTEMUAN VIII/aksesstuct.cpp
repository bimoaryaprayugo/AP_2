#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main(){
    system("cls");
    mahasiswa mhs1;
    mhs1.nama = "bimo";
    mhs1.umur = 18;
    mhs1.ipk = 4;

    cout << "Akses menggunakan titik (.)" << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    mahasiswa *ptr_mhs1 = &mhs1;
    cout << "Akses menggunakan panah (->)" << endl;
    cout << "Nama: " << ptr_mhs1->nama << endl;
    cout << "Umur: " << ptr_mhs1->umur << endl;
    cout << "IPK: " << ptr_mhs1->ipk << endl;
}