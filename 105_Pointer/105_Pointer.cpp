#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs{ 1 };         //objech mhs
    mhs.showNim();              //Member Acces Operator

    mahasiswa &refMhs = mhs;    //Pointer Reference refMhs
}
