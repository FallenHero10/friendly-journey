#include <iostream>
using namespace std;

int main(){
	int angsuran;
	int hutang;
	
	cout <<" masukan jumlah hutang"<<endl;
	cin >> hutang;
	
	for (int i = 12; i >=1; i--){
		if (angsuran = hutang/12){
			cout << "Jumlah pembayaran bulan ini :" << "Rp" << angsuran <<endl;
		}
	}
	return 0;
}