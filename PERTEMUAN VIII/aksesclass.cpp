#include <iostream>
using namespace std;

class ContohAkses {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    // Constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dalam class:" << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// Inheritance (pewarisan), class trurunan
class turunan : public ContohAkses {
    public:
    void aksesProtected() {
        //cout << privateVar << endl;// error
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\nAkses dari luar class:" << endl;
    // cout << obj.privateVar << endl;// error
    // cout << obj.protectedVar << endl;// error
    cout << obj.publicVar << endl;

    cout << "\nAkses dari class turunan:" << endl;
    turunan Tur;
    Tur.aksesProtected();

}