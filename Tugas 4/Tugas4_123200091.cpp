#include <iostream>

using namespace std;

int main()
{
    int pil, x, y, z;

    cout << "===Perkalian dan Perpangkatan===" << endl;
    cout << "1. Perkalian" << endl;
    cout << "2. Perpangkatan" << endl;
    cout << "Pilihan :";
    cin >> pil;

    switch (pil){
        case 1 :
            cout << "Input Angka X :";
            cin >> x;
            cout << "Input Angka Y :";
            cin >> y;
            cout << "Hasil :" << x << "x" << y << endl;

            z = y;

            for (int i = 1; i<=x; i++){
                 if (i < x){
                    z = y + z;
                    cout << y << "+";
                 }else if (i = x){
                     cout << y;
                     cout << " = " << z << endl;
                     cout << endl;
                 }
            }
            break;

        case 2 :
            cout << "Input Angka X :";
            cin >> x;
            cout << "Input Angka Y :";
            cin >> y;
            cout << "Hasil :" << x << "^" << y << endl;

            z = x;

            for (int j = 1; j<=y; j++){
                 if (j < y){
                    z = x * z;
                    cout << x << "x";
                 }else if (j = y){
                     cout << x;
                     cout << " = " << z << endl;
                     cout << endl;
                 }
            }
            break;
        default :
            cout << "Salah Input!:(" << endl;
            cout << endl;
            break;
    }cout << "Terima Kasih :)" << endl;




    return 0;
}
