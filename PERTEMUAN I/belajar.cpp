#include <iostream> // header standar c++
#include <conio.h> //header untuk getche() dan getch()
using namespace std;

int main () {
    string nama;
    char kom, jenis_kelamin; 
    int nim;
    float ip;

    cout << "hello word" << endl;

    cout << "Masukkan Nama: "; 
    // cin >> nama;
    getline(cin, nama); //agar karakter spasi bisa dibaca

    cout << "Masukkan KOM: ";
    cin >> kom;

    cout << "Masukkan NIM: "; 
    cin >> nim;

    cout << "Masukkan IP: ";
    cin >> ip;

    cout << "MAsukkan Jenis Kelamin (L/P): ";
    jenis_kelamin = getche(); // agar karakter langsung tampil, jadi ga perlu tekan enter

    /* ini untuk output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenis_kelamin << endl;
    putchar(jenis_kelamin); // untuk menampilkan karakter "jenis kelamin"

    getch(); // karakter yang kita ketik tidak ditampilkan di layar
}