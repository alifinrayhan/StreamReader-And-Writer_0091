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
}