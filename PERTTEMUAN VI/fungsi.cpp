#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan (Void)
void tampilpesan(){
    cout << "Selamat datang di AP 2!" << endl;
}

int tambah(int a, int b){
    return a + b;
}

//fungsi overload, fungsi yang sama dengan nama yang sama tapi parameter nya beda, tipenya beda
int kali(int a, int b){
    return a * b;
}
double kali(double a, double b){
    return a * b;
}

//fungsi rekursif, fungsi yang memanggil dirinya sendiri
int faktorial(int n){
    if (n == 0 || n == 1){ //base case
        return 1;
    } else {
        return n * faktorial(n - 1); //rekursif case
    }
}
int main(){
    system("cls");
    //memanggil fungsi tanpa nilai balikan
    tampilpesan();
    
    //memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasil = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasil << endl;

    //menggunakan fungsi overload
    int hasilkali = kali(x, y);
    double n = 3, m = 5;
    double hasilkali2 = kali(n, m);
    cout << "Hasil perkalian (int): " << hasilkali << endl;
    cout << "Hasil perkalian (double): " << hasilkali2 << endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout << "Hasil faktorial dari " << angka << ": " << faktorial(angka) << endl;

}