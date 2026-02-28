#include <iostream>
using namespace std;

int main () {
    int a, b;
    system ("cls");
    
    // assignment operator, "=" ngasih nilai ke variabel
    a = 3;
    b = 5;

    // arithmetic operator, untuk operasi matematika
    //int tambah = a + b; // penjumlahan
    //int kurang = a - b; // pengurangan
    //int kali = a * b; // perkalian
    //float bagi = a / b; // pembagian
    //float bagi = (float)a /(float) b; // untuk mengubah tipe data int ke float, agar hasil pembagian bisa berupa desimal (type casting)
    //int modulo = a % b; // sisa pembagian

   // cout << "Hasil penjumlahan: " << tambah << endl;
    //cout << "Hasil pengurangan: " << kurang << endl;
    //cout << "Hasil perkalian: " << kali << endl;
    //cout << "Hasil pembagian: " << bagi << endl;
    //cout << "Hasil sisa pembagian: " << modulo << endl;

    // Relational operator, untuk membandingkan dua nilai dari dua operand. Hasil berupa boolean
    // cout <<  (a == b) << endl; // sama dengan
    // cout << (a < b) << endl; // kurang dari
    // cout << (a != b) << endl; // tidak sama dengan

    // Logical operator (&&, ||, !), untuk menggabungkan dua atau lebih kondisi
    // cout << (true && true) << endl; 
    // cout << (true && false) << endl;
    // cout << (true || false) << endl;
    // cout << (false || false) << endl;
    // cout << !true << endl;

    // Bitwise operator, untuk operasi binner (&, |, ^, ~, <<, >>)
    // cout << (5 & 7) << endl; // bitwise AND 
    // cout << (5 | 7) << endl; // bitwise OR
    // cout << (5 ^ 7) << endl; // bitwise XOR
    // cout << (~7) << endl; // bitwise NOT
    // cout << (7 << 2) << endl; // bitwise shift left
    // cout << (7 >> 2) << endl; // bitwise shift right

    // Operator kondisional (?), Ternary, kondisi -> hasil 1 ? hasil 2
    // int max;
    // max = (a > b) ? a : b;
    // cout << "Nilai maksimum: " << max << endl;

    // shorhand operator (+=, -=, *=, /=, %=), untuk operasi matematika yang lebih singkat
    // a += 7; // sama dengan a = a + 7
    // cout << a << endl;

    // Incerement dan decrement operator (++, --), untuk menambah atau mengurangi nilai variabel sebanyak 1
    
    // Pre Increment ++ ada di depan variabel
    cout << a << endl; // 3
    cout << ++a << endl; // ++3 = 4

    // Post Increment ++ ada di belakang variabel
    // cout << a << endl; // 3
    // cout << a++ << endl; // 3 + 1
    // cout << a << endl; // 4

    // Pre Decrement -- ada di depan variabel
    // cout << b << endl; // 5
    // cout << --b << endl; // --5 = 4

    // Post Decrement -- ada di belakang variabel
    // cout << b << endl; // 5              
    // cout << b-- << endl; // 5 - 1
    // cout << b << endl; // 4
}