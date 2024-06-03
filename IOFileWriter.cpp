#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    //memasukan file dalam mode menulis
    ofstream outfile;
    // manunjuk ke sebuah nam file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= menulis File, \'q\' untuk keluar" << endl;

    // unlimeted loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q" ) break;
        //menulis dan memasukan nilai dari baris ke dalma file
        outfile << baris << endl;
    }
    // selesai dalam menulis 
    outfile.close();
}