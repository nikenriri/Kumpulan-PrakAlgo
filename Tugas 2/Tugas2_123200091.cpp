#include <iostream>

using namespace std;

int main()
{
    int umura,umuri,umura1,umura2;
    int b1,b2,b3,b4,tagihan;

    cout<<"Umur Ayah      :";
    cin>>umura;
    cout<<"Umur Ibu       :";
    cin>>umuri;
    cout<<"Umur Anak 1    :";
    cin>>umura1;
    cout <<"Umur Anak 2   :";
    cin>>umura2;
    cout<<endl;


    if(umura<=12){
        b1=15000;
    }else if (umura >12 && umura <=20){
        b1=20000;
    }else if (umura>20){
        b1=30000;
    }
    if(umuri<=12){
        b2=15000;
    }else if (umuri >12 && umuri <=20){
        b2=20000;
    }else if (umuri >20){
        b2=30000;
    }
    if(umura1<=12){
        b3=15000;
    }else if(umura1 >12 && umura1 <=20){
        b3=20000;
    }else if (umura1 >20){
        b3=30000;
    }
    if(umura2<=12){
        b4=15000;
    }else if (umura2 >12 && umura2 <=20){
        b4=20000;
    }else if (umura2 >20){
        b4=30000;
    }
    tagihan=30*(b1+b2+b3+b4);
    cout<<"Tagihan satu bulan adalah Rp."<<tagihan<<endl;


    return 0;
}
