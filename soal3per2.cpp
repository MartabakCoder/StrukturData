#include <iostream>

using namespace std;

//Kamus Global
int wadah,i,j,k;

struct arr{
    int* bilangan;
    string* nama;
    int size;
}peserta;

int main(){
    
    cout << "Enter Size of an Array: " << endl;
    cin >> peserta.size;
    peserta.bilangan = new int[peserta.size];
    peserta.nama = new string[peserta.size];
    i = 0; //reset looping
    while (i < peserta.size) {
        cout <<  "Nama Peserta Lomba-"<<i+1<<":";
        cin >> peserta.nama[i];
        cout <<  "Jumlah buah rambutan: ";
        cin >> peserta.bilangan[i];
        i = i + 1;
    }
    int max = 0;
    //Find maximum and minimum in all array elements.
    for(i=1; i<peserta.size; i++){
        if(peserta.bilangan[i] > peserta.bilangan[max]){
            max = i;
        }
    }
    cout<<"Pemenang Lomba adalah : "<<peserta.nama[max]<<endl;
    cout<<"Rambutan Kak Ros : "<<peserta.bilangan[max];
}