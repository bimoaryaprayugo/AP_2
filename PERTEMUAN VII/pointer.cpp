#include <iostream>
using namespace std;

int main(){
    system ("cls");

    //Pointer declaration
    int number = 35;
    int *pointer_number = &number; 

    cout << "Isi variabel number: " << number << endl;
    cout << "Alamat dari variabel number: " << &number << endl;
    cout << "Isi variabel pointer_number: " << pointer_number << endl;
    cout << "isi variabel yang ditunjuk oleh pointer_number: " << *pointer_number << endl;
    cout << "Alamat memori dari variabel pointer_number: " << &pointer_number << endl;
}