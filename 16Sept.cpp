#include <iostream>

using namespace std;

void tampil(int x,string a){
    for(int i = 1;i<=x;i++){
        cout<<a<<endl;
    }
}
int hitungTambah(int a, int b){
    return a+b;
}

int main(){

    tampil(5,"Es teh");
    int hasil = hitungTambah(10,50);
    cout<<hasil;
    return 0;
}