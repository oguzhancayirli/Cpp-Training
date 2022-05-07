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

switch(islem){
    case 1:
    cout<<"islem sonucu:"<<sayi1+sayi2;
    break;

    case 2:
    cout<<"islem sonucu:"<<sayi1-sayi2;
    break;

    case 3:
    cout<<"islem sonucu:"<<sayi1/sayi2;
    break;

    case 4:
    cout<<"islem sonucu:"<<sayi1*sayi2;
    break;

    default:
    cout<<"Cikis Yapabilirsiniz";
    break;

}
return 0;
}

