#include<iostream>
#include <cmath>

using namespace std;

struct balok{
    int panjang,lebar, tinggi;
};

struct tabung{
    int jari,tinggi;
};

float volumeBalok(balok x){
    return x.panjang*x.lebar*x.tinggi;
}
float volumeTabung(tabung x){
    return 3.14*x.jari*x.jari*x.tinggi;
}

float hitungTabung(float volumeA,int volumeB){
    return volumeA/volumeB;
}

int main(){
    balok Truk;
    tabung Paket;
    float volumeTruk,volumePaket;
    float jumlahPaket;

    cout<<"==Truk Mode=="<<endl;
    cout<<"Input Panjang Truk :";
    cin>>Truk.panjang;
    cout<<"Input Lebar Truk :";
    cin>>Truk.lebar;
    cout<<"Input Tinggi Truk :";
    cin>>Truk.tinggi;
    volumeTruk = volumeBalok(Truk);

    cout<<"==Paket Mode=="<<endl;
    cout<<"Input Jari-jari Paket :";
    cin>>Paket.jari;
    cout<<"Input Tinggi Paket :";
    cin>>Paket.tinggi;
    volumePaket = volumeTabung(Paket);

    jumlahPaket = hitungTabung(volumeTruk,volumePaket);
    
    cout<<"Jumlah Paket :"<<jumlahPaket<<endl;
}