#include <iostream>
using namespace std;

void sapa(string nama){ //nama adalah parameter formal
    cout << "Halo " << nama << " Selamat datang di AP 2!" << endl;
}
int main(){
    string namapengguna = "Bimo";
    sapa(namapengguna); //namapengguna adalah parameter aktual, yang akan dikirim ke parameter formal nama

}