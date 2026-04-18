#include <iostream>
#include <string>
#include <array>
using namespace std;
int main(){
    // Array declaration & initialization
    // 2 cara membuat array

    // Cara 1 : array kosong
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Dewi";
    // nama[4] = "Padhil";

    // Cara 2 : array lamgsung diisi
    //string nama[5] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    // string nama[] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"}; // ukuran array otomatis

    // Menampikkan data dalam array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;

    // Menggunakan Looping ascending
    // for (int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }    

    //discending
    // for (int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    // Multidimensional Array
    // 1 2 3
    // 4 5 6

    // int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < 2; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // string (Array of char)
    // string nama = "Alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length() << endl; // untuk menghitung jumlah karakter dalam string
    // string s1 = "Hello";
    // string s2 = "World";

    // 1. s1 = s2
    // s1 = s2;
    // cout << "s1 sekrang = " << s1 << endl;

    // 2. s1 + s2
    // s1 = "Hello"; // reset nilai
    // cout << "Hasil gabungan = "  << s1 + s2 << endl;

    // 3. s1.length() 
    // cout << s1.length() << endl; //5
    // cout << (s1 + s2).length() << endl; //10

    //4. s1.substr(n,m) n itu mulai dari berapa, m itu panjangnya berapa
    // cout << s1.substr(2, 3) << endl; //llo

    // Operator sizeof
    // int angka = 10;
    // cout << sizeof(angka) << endl;
    
    // int nilai [] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai) << endl;

    // Array library
    // Misal Array biasa : float nilai[5] 

    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "Nilai : " ;

    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }
}