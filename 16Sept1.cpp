#include<iostream>
#include <cmath>

using namespace std;

struct luas{
    int panjang,lebar;
};

float luasPersegiPanjang(luas x){
    return x.panjang*x.lebar;
}

float hitungKeramik(float luasA,int luasB){
    return luasA/luasB;
}

int main(){
    luas kamar;
    luas keramik;
    float luasKamar,luasKeramik;
    float jumlahKeramik;
    int jumPerDus,jumDus;
    int hargaKeramikSat,hargaKeramikTot;

    cout<<"==Kamar Mode=="<<endl;
    cout<<"Input Panjang Kamar :";
    cin>>kamar.panjang;
    cout<<"Input Lebar Kamar :";
    cin>>kamar.lebar;
    luasKamar = luasPersegiPanjang(kamar);
    cout<<"==Keramik Mode=="<<endl;
    cout<<"Input Panjang Keramik :";
    cin>>keramik.panjang;
    cout<<"Input Lebar Keramik :";
    cin>>keramik.lebar;
    luasKeramik = luasPersegiPanjang(keramik);
    cout<<"Input Jumlah per Dus Keramik :";
    cin>>jumPerDus;

    jumlahKeramik = ceil(hitungKeramik(luasKamar,luasKeramik));
    jumDus = ceil(hitungKeramik(jumlahKeramik,jumPerDus));
    
    cout<<"Luas Keramik :"<<luasKeramik<<endl;
    cout<<"Luas Kamar :"<<luasKamar<<endl;
    cout<<"Jumlah Keramik :"<<jumlahKeramik<<endl;
    cout<<"Jumlah Dus Keramik :"<<jumDus<<endl;
    cout<<"==Harga Mode=="<<endl;
    cout<<"Input Harga Keramik per Dus :";
    cin>>hargaKeramikSat;
    hargaKeramikTot = hargaKeramikSat*jumDus;
    cout<<"Harga Total Keramik :"<<hargaKeramikTot<<endl;
}