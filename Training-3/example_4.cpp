#include <iostream>
using namespace std;

main(){
float pi=3.14;
float yaricap, toplam;
float dortgenuzunluk1, dortgenuzunluk2;
int secim;

cout<<"Yapmak istediginiz islemi seciniz: \n1-dortgen alani \n2-Dortgenin Cevresi \n3-Cemberin cevresi \n4-cemberin alani \n5-Cikis"<<endl;
cin>>secim;

switch(secim){
    case 1:
        cout<<"Dortgenin 1. uzunlugunu giriniz: "<<endl;
        cin>>dortgenuzunluk1;
        cout<<"Dortgenin 2. uzunlugunu giriniz: "<<endl;
        cin>>dortgenuzunluk2;
        toplam= dortgenuzunluk1*dortgenuzunluk2;
        cout<<"Dorgenin Alani: "<<toplam<<endl;
        main();
    break;

    case 2:
        cout<<"Dortgenin 1. uzunlugunu giriniz: "<<endl;
        cin>>dortgenuzunluk1;
        cout<<"Dortgenin 2. uzunlugunu giriniz: "<<endl;
        cin>>dortgenuzunluk2;
        toplam= dortgenuzunluk1+dortgenuzunluk2;
        cout<<"Dorgenin Cevresi: "<<toplam<<endl;
        main();
    break;

    case 3:
        cout<<"Cemberin Yaricapini giriniz: "<<endl;
        cin>>dortgenuzunluk1;
        toplam= dortgenuzunluk1*2*pi;
        cout<<"Cemberin Cevresi: "<<toplam<<endl;
        main();
    break;

    case 4:
        cout<<"Cemberin Yaricapini giriniz: "<<endl;
        cin>>dortgenuzunluk1;
        toplam= dortgenuzunluk1*dortgenuzunluk1*pi;
        cout<<"Cemberin Alani: "<<toplam<<endl;
        main();
    break;

    case 5:
        cout<<"Cikmak icin herhangi bir tusa basiniz: "<<endl;

}
return 0;
}
