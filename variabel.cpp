#include <iostream>
using namespace std;

string variabelglobal = "Ilmu"; //contoh variabel global

void namavariabel(){
    string variabellokal = "Komputer"; //contoh variabel lokal
    //coba ases 1
    cout << variabellokal << endl;    
    //coba akses 3
    cout << variabelglobal << endl; //variabel global bisa diakses di dalam fungsi
}
int main(){
    namavariabel();
    //coba akses 2
    //cout << variabellokal << endl; //akan error karena variabellokal hanya bisa diakses di dalam fungsi namavariabel
    //coba akses 4
    cout << variabelglobal << endl; //variabel global bisa diakses di dalam fungsi main
}