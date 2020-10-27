#include <iostream>

using namespace std;

int main()
{
    int psword, pil;
    float harian, uts, uas;
    float hasil;
    string uname;

    cout << "Login akun==============" << endl;
    cout << "Username\t :";
    cin >> uname;
    cout << "Password\t :";
    cin >> psword;
    cout <<"========================" << endl;

    if (uname == "junedd" && psword == 999){
            cout <<"Login Berhasil!" << endl;
            cout <<"Input Nilai Mata Kuliah" << endl;
            cout <<"1.Algoritma dan Pemrograman" << endl;
            cout <<"2.Kalkulus" << endl;
            cout <<"Pilih\t :";
            cin >> pil;
            if (pil == 1){
                    cout <<"Nilai Harian\t :";
                    cin >> harian;
                    cout <<"Nilai UTS\t :";
                    cin >> uts;
                    cout <<"Nilai UAS\t :";
                    cin >> uas;
                    cout << endl;
                    hasil = (harian + uts + uas)/3;
                    if (hasil >= 80){
                            cout <<"Anda Lulus Algoritma dan Pemrograman dengan nilai"<< hasil << endl;
                    }else {
                            cout <<"Anda Tidak Lulus Algoritma dan Pemrograman dengan nilai"<< hasil << endl;
                    }
            }else if (pil == 2){
                    cout <<"Nilai Harian\t :";
                    cin >> harian;
                    cout <<"Nilai UTS\t :";
                    cin >> uts;
                    cout <<"Nilai UAS\t :";
                    cin >> uas;
                    cout << endl;
                    hasil = (harian + uts + uas)/3;
                    if (hasil >= 80){
                            cout <<"Anda Lulus Kalkulus dengan nilai"<< hasil << endl;
                    }else {
                            cout <<"Anda Tidak Lulus Kalkulus dengan nilai"<< hasil << endl;
                    }
            }else {
                    cout <<"Input Anda Salah !" <<endl;
            }
    }else if (uname == "junedd" && psword != 999){
        cout <<"Password Anda Salah!"<< endl;
    }else if (psword == 999 && uname != "junedd"){
        cout <<"Username Anda Salah!"<< endl;
    }else if (uname != "junedd" && psword != 999){
        cout <<"Username dan Password Anda Salah!"<< endl;
    }
    cout << endl;


    return 0;
}
