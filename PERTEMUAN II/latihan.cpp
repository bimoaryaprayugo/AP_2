#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float r, volume, luas;
    system("cls");

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (4.0 / 3.0) * M_PI * pow(r, 3);
    luas = 4 * M_PI * pow(r, 2);

    cout << "\nVolume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luas << endl;

    return 0;
}