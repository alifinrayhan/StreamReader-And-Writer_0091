#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        //throw 0.5; // melemparkan sebuah integer maka
        cout << "peryataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "penegecualian akan dieksekusi" << endl;
    }
    catch (...) {
        //*jika selain integer maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}