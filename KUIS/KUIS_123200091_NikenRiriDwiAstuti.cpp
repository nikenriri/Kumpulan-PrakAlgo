#include <iostream>

using namespace std;

int main()
{
    int pil,x,y,i,ronde,a=0,b=0;
    string nama,p1,p2,pilih1,pilih2;
    char nim[9];
    float k,r,t,p,rerata;

    cout << "=====KUISSS=====" << endl;
    cout << "1.Deret Unik    " << endl;
    cout << "2.Nilai Akhir   " << endl;
    cout << "3.Gunting Batu Kertas" << endl;
    cout << "4.Keluar        " << endl;
    cout << "Pilih  :   ";
    cin >> pil;
    cout << endl;

    switch (pil){
        case 1:
            cout << "X  :";
            cin >> x;
            cout << "Y  :";
            cin >> y;
            if (y>1)
            {
            for (i=1; i<=y; i++)
            {
            if (i%3==0)
            {
            cout << ("|");
            }
            else
            {
            cout << ("-");
            }
           }
           cout << endl;
           }
           break;
        case 2:
            cout << "Input Nilai Praktikum =====" << endl;
            cout << "Nama       :";
            cin >> nama;
            cout << "NIM        :";
            cin >> nim;
            cout << "Kuis       :";
            cin >> k;
            cout << "Responsi   :";
            cin >> r;
            cout << "Tugas      :";
            cin >> t;
            cout << "Project    :";
            cin >> p;
            cout << endl;

            rerata = (20 * k + 35 * r + 15 * t + 30 * p)/100;

            if (nim[0]=='1' && nim[1]=='2' && nim[2]=='1'){
                cout << "Nilai Akhir===================" << endl;
                cout << "Nama           : "<< nama << endl;
                cout << "NIM            : " << nim << endl;
                cout << "Jurusan        : Teknik Kimia" << endl;
                if (rerata >= 80 && rerata  <=100){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : A" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >=60 && rerata < 80){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : B" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >= 40 && rerata < 60){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : C" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata >= 20 && rerata < 40){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : D" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata < 20){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : E" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }
           }else if (nim[0]=='1' && nim[1]=='2' && nim[2]=='2'){
                cout << "Nilai Akhir===================" << endl;
                cout << "Nama           : "<< nama << endl;
                cout << "NIM            : "<< nim << endl;
                cout << "Jurusan        : Teknik Industri" << endl;
                if  (rerata >= 80 && rerata  <=100){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : A" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >=60 && rerata < 80){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : B" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >= 40 && rerata < 60){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : C" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata >= 20 && rerata < 40){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : D" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata < 20){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : E" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }
          }else if (nim[0]=='1' && nim[1]=='2' && nim[2]=='3'){
                cout << "Nilai Akhir===================" << endl;
                cout << "Nama           : "<< nama << endl;
                cout << "NIM            : "<< nim << endl;
                cout << "Jurusan        : Informatika" << endl;
                if (rerata >= 80 && rerata  <=100){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : A" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >=60 && rerata < 80){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : B" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >= 40 && rerata < 60){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : C" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata >= 20 && rerata < 40){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : D" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata < 20){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : E" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }
         }else if (nim[0]=='1' && nim[1]=='2' && nim[2]=='4'){
                cout << "Nilai Akhir===================" << endl;
                cout << "Nama           : "<< nama << endl;
                cout << "NIM            : "<< nim << endl;
                cout << "Jurusan        : Siatem Informasi" << endl;
                if (rerata >= 80 && rerata  <=100){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : A" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >=60 && rerata < 80){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : B" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >= 40 && rerata < 60){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : C" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata >= 20 && rerata < 40){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : D" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata < 20){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : E" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }
         }else {
                cout << "Nilai Akhir===================" << endl;
                cout << "Nama           : "<< nama << endl;
                cout << "NIM            : "<< nim << endl;
                cout << "Jurusan        : Salah Jurusan" << endl;
                if (rerata >= 80 && rerata  <=100){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : A" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >=60 && rerata < 80){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : B" << endl;
                    cout << "Selamat Anda LULUS";
                }else if (rerata >= 40 && rerata < 60){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : C" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata >= 20 && rerata < 40){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : D" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }else if (rerata < 20){
                    cout << "Rata-rata      : " << rerata << endl;
                    cout << "Nilai Huruf    : E" << endl;
                    cout << "Mohon Maaf Anda belum LULUS praktikum";
                }
            }
            break;
         case 3:
              cout << "Masukkan Nama Player 1 :";
              cin >> p1;
              cout << "Masukkan Nama Player 2 :";
              cin >> p2;
              cout << "Masukkan Banyak Ronde  :";
              cin >> ronde;

              for (int i=0; i<ronde; i++){
                   cout <<endl;
                   cout << "Ronde Ke-" << i+1 <<endl;
                   cout << "Masukkan Kertas/Gunting/Batu "<< p1 <<":";
                   cin >> pilih1;
                    if (pilih1== "kertas" && pilih2== "gunting"){
                        b++;
                    }else if (pilih1== "kertas" && pilih2== "batu"){
                        a++;
                    }else if (pilih1== "gunting" && pilih2== "kertas"){
                        a++;
                    }else if (pilih1== "gunting" && pilih2== "batu"){
                        b++;
                    }else if (pilih1== "batu" && pilih2== "kertas"){
                        b++;
                    }else if (pilih1== "batu" && pilih2== "gunting"){
                        a++;
                    }else{

                    }

                  cout << "Masukkan Kertas/Gunting/Batu "<< p2 <<":";
                  cin >> pilih2;
                    if (pilih1== "kertas" && pilih2== "gunting"){
                        b++;
                    }else if (pilih1== "kertas" && pilih2== "batu"){
                        a++;
                    }else if (pilih1== "gunting" && pilih2== "kertas"){
                        a++;
                    }else if (pilih1== "gunting" && pilih2== "batu"){
                        b++;
                    }else if (pilih1== "batu" && pilih2== "kertas"){
                        b++;
                    }else if (pilih1== "batu" && pilih2== "gunting"){
                        a++;
                    }else{

                    }

                  }
                  cout << endl;
                  if (a>b){
                  cout << "_____Hasil Akhir_____" <<endl;
                  cout << p1 << " Menang " << a << " kali" <<endl;
                  cout << p2 << " Menang " << b << " kali" <<endl;
                  cout << "Jadi Pemenangnya adalah " << p1 <<endl;
                  }else if (a<b){
                  cout << "_____Hasil Akhir_____" <<endl;
                  cout << p1 << " Menang " << a << " kali" <<endl;
                  cout << p2 << " Menang " << b << " kali" <<endl;
                  cout << "Jadi Pemenangnya adalah " << p2 <<endl;
                  }else {
                  cout << "_____Hasil Akhir_____" <<endl;
                  cout << p1 << " Menang " << a << " kali" <<endl;
                  cout << p2 << " Menang " << b << " kali" <<endl;
                  cout << "Pertandingan Seri " <<endl;
                  }
                  break;
         case 4:
           break;
         default:
            cout << "Mohon Maaf Anda Salah Input" <<endl;
    }






    return 0;
}
