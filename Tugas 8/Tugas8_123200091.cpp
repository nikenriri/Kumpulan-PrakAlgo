#include <iostream>

using namespace std;

const double phi = 3.14;
double hitung_luas(double r){
    double luas = phi * r * r;
    return luas;
}
double hitung_keliling(double r){
    double keliling = 2 * phi * r;
    return keliling;
}
double hitung_volume(double r, double t){
    double volume = phi * r * r * t;
    return volume;
}


int main()
{
    int pil;
    double jari, tinggi, luas, keliling;
    char lanjut;

    cout << "Hitung Lingkaran ===========" << endl;
    cout << "1.Luas Lingkaran" << endl;
    cout << "2.Keliling Lingkaran" << endl;
    cout << "3.Volume Tabung" << endl;
    cout << "Pilih : ";
    cin >> pil;

    bool opsi = true;

    while(opsi){
    switch(pil){
    case 1:
        cout << "Jari - jari    : ";
        cin >> jari;

        cout << "Luas Lingkarannya adalah   : ";
        cout << hitung_luas(jari) << endl;

        cout << "Ulangi Program ? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
                 cout << endl;
                 cout << "Hitung Lingkaran ===========" << endl;
                 cout << "1.Luas Lingkaran" << endl;
                 cout << "2.Keliling Lingkaran" << endl;
                 cout << "3.Volume Tabung" << endl;
                 cout << "Pilih : ";
                 cin >> pil;
        }else if(lanjut == 'n'){
                 cout << "Program selesai, Terimakasih :)" << endl;
                 opsi = false;
                 break;
        }
        break;
    case 2:
        cout << "Jari - jari    : ";
        cin >> jari;

        cout << "Keliling Lingkarannya adalah   : ";
        cout << hitung_keliling(jari) << endl;

        cout << "Ulangi Program ? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
                 cout << endl;
                 cout << "Hitung Lingkaran ===========" << endl;
                 cout << "1.Luas Lingkaran" << endl;
                 cout << "2.Keliling Lingkaran" << endl;
                 cout << "3.Volume Tabung" << endl;
                 cout << "Pilih : ";
                 cin >> pil;
        }else if(lanjut == 'n'){
                 cout << "Program selesai, Terimakasih :)" << endl;
                 opsi = false;
                 break;
        }
        break;
    case 3:
        cout << "Jari - jari    : ";
        cin >> jari;
        cout << "Tinggi         : ";
        cin >> tinggi;

        cout << "Volume Tabung adalah   : ";
        cout << hitung_volume(jari,tinggi) << endl;

        cout << "Ulangi Program ? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
                 cout << endl;
                 cout << "Hitung Lingkaran ===========" << endl;
                 cout << "1.Luas Lingkaran" << endl;
                 cout << "2.Keliling Lingkaran" << endl;
                 cout << "3.Volume Tabung" << endl;
                 cout << "Pilih : ";
                 cin >> pil;
        }else if(lanjut == 'n'){
                 cout << "Program selesai, Terimakasih :)" << endl;
                 opsi = false;
                 break;
        }
        break;
    default:
        {
        cout << "Input Salah :)" << endl;
        }
        cout << "Ulangi Program ? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
                 cout << endl;
                 cout << "Hitung Lingkaran ===========" << endl;
                 cout << "1.Luas Lingkaran" << endl;
                 cout << "2.Keliling Lingkaran" << endl;
                 cout << "3.Volume Tabung" << endl;
                 cout << "Pilih : ";
                 cin >> pil;
        }else if(lanjut == 'n'){
                 cout << "Program selesai, Terimakasih :)" << endl;
                 opsi = false;
                 break;
        }
    }


    }






    cin.get();
    return 0;

}







