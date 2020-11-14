#include <iostream>

using namespace std;

int main()
{
    int pil, p, l, i, j, n, m;

    cout << "======Gambar Bangun Datar=======" << endl;
    cout << "1. Kotak Bolong" << endl;
    cout << "2. Segitiga    " << endl;
    cout << "Pilih  :  ";
    cin >> pil;
    cout << endl;

    switch (pil){
        case 1 :
            cout << "Input panjang:\t";
            cin >> p;
            cout << "Input lebar  :\t";
            cin >> l;

            if (p>0 && l>0)
            {
              for (i=0; i<p; i++)
              {
               for (j=0; j<l; j++)
               {
                if ((i==0)|| (i==p-1)|| (j==0)|| (j==l-1))
               {
                cout << ("* ");
               }
                else if (p%2==1 && l&2==1)
               {
                cout << ("  ");
               }
               else
              {
             cout << ("  ");
             }
            }
            cout << endl;
            }

           }
           break;

        case 2 :
            cout << "Tinggi :";
            cin >> n;

            for (i=1; i<=n; i++)
            {
             m=i;
             for (j=1; j<=i; j++)
             {
               cout << m << (" ");
               m = m + n - j;
             }
             cout << endl;
            }
            break;
        default :
            cout << "Oopss Anda Salah Input !!" << endl;
            cout << endl;
    }

    return 0;
}
