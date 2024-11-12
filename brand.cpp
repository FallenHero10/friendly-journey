//Naufal rafif awaludin
//240102091
#include <iostream>

using namespace std;

int main(){
    string brand;
    string ukuran;
    char Pilih;
    int total;
    int hargaS1 = 100000;
    int hargaM1 = 322000;
    int hargaL1 = 123000;
    int hargaXL1 = 455000;
    int hargaS2 = 90000;
    int hargaM2 = 97000;
    int hargaL2 = 120000;
    int hargaXL2 = 151000;

  do{
    cout<<"Pilih Brand Uniqlo,MyStyle: ";
    cin>>brand;

    if(brand == "Uniqlo" || brand == "uniqlo" || brand == "MyStyle" || brand == "mystyle"){
    cout << "Pilih Ukuran Baju S,M,L,XL: ";
    cin >> ukuran;
    
  // UNNIQLO & MYSTYLE
    if((ukuran == "S"||ukuran == "s") && (brand=="Uniqlo" || brand=="uniqlo")){
    cout<<"Harga Untuk Ukuran S Rp."<< hargaS1 <<endl;
    }
    else if((ukuran == "L"||ukuran=="l") && (brand=="Uniqlo" || brand=="uniqlo")){
    cout<<"Harga Untuk Ukuran Ini Rp."<< hargaL1 <<endl;
    }
    else if((ukuran == "M"||ukuran=="m") && (brand=="Uniqlo" || brand=="uniqlo")){
    cout<<"Harga Untuk Ukuran Ini Rp."<< hargaM1 <<endl;
    }
    else if((ukuran == "XL"||ukuran=="xl") && (brand=="Uniqlo" || brand=="uniqlo")){
    cout<<"Harga Untuk Ukuran Ini Rp."<<hargaXL1<<endl;
    }
    else if((ukuran == "S"||ukuran=="s") && (brand=="MyStyle" || brand=="mystyle")){
    cout<<"Harga Untuk Ukuran Ini Rp."<<hargaS2<<endl;
    }
    else if((ukuran == "M"||ukuran=="m") && (brand=="MyStyle" || brand=="mystyle")){
    cout<<"Harga Untuk Ukuran Ini Rp."<<hargaM2<<endl;
    }
    else if((ukuran == "L"||ukuran=="l") && (brand=="MyStyle" || brand=="mystyle")){
    cout<<"Harga Untuk Ukuran Ini Rp."<<hargaL2<<endl;
    }
    else if((ukuran == "XL"||ukuran=="xl") && (brand=="MyStyle" || brand=="mystyle")){
    cout<<"Harga Untuk Ukuran Ini Rp."<<hargaXL2<<endl;
    }
    else{
    cout<<"!!Tidak Dalam Daftar!!" << endl;
    }
  }else {
    cout << "Pilihan anda tidak terdaftar" << endl;
    }

    cout << "Pilih Brand Lain ? (y/n)";
    cin >> Pilih;
}while(Pilih == 'y' || Pilih == 'Y');

return 0;

}