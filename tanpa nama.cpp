

#include <iostream>
using namespace std;

int main(){
    int bil;
    int total;

    do{
        cout << " Masukkan Bilangan Positif = ";
        cin >> bil;
        if(bil >= 0){
            total += bil;
        }
    cout << "Total Nilai Yang di input= " << total << endl;
    }while(bil > 0);

    
return 0;
}