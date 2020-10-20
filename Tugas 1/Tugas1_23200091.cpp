#include <iostream>

using namespace std;

int main()
{
    string nama;
    int nim;
    int uts;
    int uas;
    int rerata;
    cout <<"masukan nama:";
    getline(cin,nama);
    cout<<"masukkan nim:";
    cin>>nim;
    cout<<"masukkan uts:";
    cin>>uts;
    cout<<"masukkan uas:";
    cin>>uas;
    rerata=(uts+uas)/2;
    cout<<"hai nama saya:"<<nama<<endl;
    cout<<"nim:"<<nim<<endl;
    cout<<"nilai akhir:"<<rerata<< endl;
    return 0;
}
