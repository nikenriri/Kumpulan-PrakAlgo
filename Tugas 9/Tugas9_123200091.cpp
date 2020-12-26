#include <iostream>

using namespace std;

int main()
{
    int banyak_angka;

    cout << "Masukkan banyak angka : ";
    cin >> banyak_angka;

    int angka[banyak_angka],input,jum;
    int i;
    float rerata;
    jum = 0;

    for (i = 0; i < banyak_angka ; i++)
    {
      cout << "Angka ke- " << i+1 << " : ";
      cin >> input;
      angka[i] = input;
      jum += angka[i];
    }
    cout << endl;
    cout << endl;
    cout << "_____Hasil_____"<< endl;
    cout << "Deret       : ";
    for (i = 0; i < banyak_angka; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;

    int max, min;
    max = angka[0];
    min = angka[0];

    for (i = 0; i < banyak_angka; i++)
    {
        if (max < angka[i])
        {
            max = angka[i];
        }
        else if (min > angka[i])
        {
            min = angka[i];
        }
    }
    cout << "Maksimum    : " << max << endl;
    cout << "Minimum     : " << min << endl;

    rerata = float(jum)/float(banyak_angka);
    cout << "Rata-rata   : " << rerata << endl;

    int selisih;
    max = angka[i+1]-angka[i];
    selisih = angka[i+1]-angka[i];

    for(i=0; i < banyak_angka; i++){
    if(i+1 >= banyak_angka){
       break;
    }else{
       angka[i+1]-angka[i];
        if(max < angka[i+1]-angka[i]){
         max = angka[i+1]-angka[i];
    }
  }
}
 cout << "selisih max : " << max << endl;









    return 0;

}
