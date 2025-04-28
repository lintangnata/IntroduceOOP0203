#include <iostream>
#include <string>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void inputData()
    {
        cout << "Masukkan Jenis Kelamin = " << endl;
        cin >> jenisKelamin;
        cout << "Masukkan Tipe Hewan = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }

    void tapilHewan()
    {
        cout << "Jenis kelaminnya adalah = " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan ambon;
    ambon.inputData();
    cout << "Tipenya adalah = " << ambon.tipe << endl;
    cout << "Umurnya adalah = " << ambon.umur << endl;
    ambon.tapilHewan();
}