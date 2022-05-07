#include <iostream>
using namespace std;
main(){
int sayi1,sayi2,islem;


cout<<"islem Yapmak istediginiz ilk sayiyi yaziniz: "<<endl;
cin>>sayi1;
cout<<"islem Yapmak istediginiz ikinci sayiyi yaziniz: "<<endl;
cin>>sayi2;
cout<<"Yapmak istediginiz islemi seciniz: \n1-Toplama \n2-Cikarma \n3-Bolme \n4-Carpma \n5-Cikis  "<<endl;
cin>>islem;

if(islem==1){
    cout<<"islem sonucu:"<<sayi1+sayi2;
}
else if(islem==2){
    cout<<"islem sonucu:"<<sayi1-sayi2;
}
else if(islem==3){
    cout<<"islem sonucu:"<<sayi1/sayi2;
}
else if(islem==4){
    cout<<"islem sonucu:"<<sayi1*sayi2;
}
else{
    cout<<"Cikis Yapabilirsiniz";
}

return 0;
}
