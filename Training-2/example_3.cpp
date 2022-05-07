#include <iostream>
using namespace std;
main(){
int sayi=0 ,sayi1,sayi2,sayi3,sayi4,sayi5, a, b,c,d,e;
cout<<"Karsilastirmak istediginiz 5 sayiyi giriniz:";
cin>>sayi1>>sayi2>>sayi3>>sayi4>>sayi5;

a =max(sayi,sayi1);
b =max(a,sayi2);
c =max(b,sayi3);
d =max(c,sayi4);
e =max(d,sayi5);

cout<<"Girdiginiz En Buyuk sayi:"<<e;



return 0;
}
