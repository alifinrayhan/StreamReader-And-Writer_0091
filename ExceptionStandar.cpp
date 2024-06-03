#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
    cout << "Awal Program" << endl; // penanda 1
    try {
        array<int, 3> data = {3, 4, 8, };
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
    }
    catch (exception& e) {
        //penagkap menggunakan obyek exception
        cout << e.what() << endl;
        //*akan dieksekusi karna array data hanya memiliki 3 elemen*
    }
    cout << "Baris Program yang" << endl;
    //*penanda 2: bahwa progrema berjalan tanpaberhenti meskipun terjadi kesalahan
    return 0;
}