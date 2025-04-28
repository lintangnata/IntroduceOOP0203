#include <iostream>
using namespace std;

class Lingkaran {
    public:
    double jariJari;
    double luasLingkaran;

    void inputData() {
        cout << "Masukkan Jari-Jari = " << endl;
        cin >> jariJari;
    }

    double hitungLuas() {
        return 3.14*jariJari*jariJari;
    }

int main() {
    Lingkaran bunder;
    bunder.inputData();
    cout << endl;
    cout << "luasnya adalah = " << bunder.hitungLuas << endl;
    cout << endl;
};