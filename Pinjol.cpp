//Naufal rafif awaludin
//240102091

#include <iostream>
using namespace std;

int main(){
    int duit;
    int cicilan;
    int bulan = 12;
    int i=1;
    cout<<"Masukkan Pinjaman= ";
    cin>>cicilan;

    while(bulan>=1){
        cout << "Tagihan Bulan "<< i++ <<" = "<< cicilan/12 <<endl;
        bulan--;
    }
    return 0;
}