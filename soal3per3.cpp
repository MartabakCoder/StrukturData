#include <iostream>
using namespace std;

int Max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int Upin,Ipin,Mail,Fizi,Ros;
    cout<<"Masukan buah Upin"<<endl;
    cin>>Upin;
    cout<<"Masukan buah Ipin"<<endl;
    cin>>Ipin;
    cout<<"Masukan buah Mail"<<endl;
    cin>>Mail;
    cout<<"Masukan buah Fizi"<<endl;
    cin>>Fizi;

    Ros = max(max(Upin,Ipin),max(Mail,Fizi));
    
       cout<<"Rambutan kak Ros adalah "<<Ros<<" buah";
}