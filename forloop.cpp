#include <iostream>
using namespace std;
int main(){
	int ayam;
	int jumlah = 9;
	for (ayam = 10; ayam >=1; ayam--){
		cout <<"anak ayam mati " << ayam << " sisa " << jumlah-- <<endl;
	}
	cout << "Anak ayam depresi";
	return 0;
}