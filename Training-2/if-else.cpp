#include <iostream>
using namespace std;
int sayac=1;
main(){

int zaman;
cout<<"Bir Zaman suresi giriniz:"<<endl;
cin>>zaman;
cout<<"zamaniniz " <<zaman<<" dakikadir"<<endl;

if (zaman>20){
    cout<<"gec kaldiniz...."<<endl;
    main();
}


else if(zaman>15 && zaman<20){
    cout<<"Sinir zamanda geldiniz...."<<endl;
    main();
}


else{
    cout<<"Zamaninda Yetistiniz...."<<endl;
    sayac++;
    if(sayac<=3){
     main();
    }

}


return 0;
}
