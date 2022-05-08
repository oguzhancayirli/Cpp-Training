#include <iostream>
using namespace std;
main(){
    float vizeNotu, finalNotu, toplam;

    cout<<"Lurfen Vize Notunu Giriniz: "<<endl;
    cin>>vizeNotu;
    cout<<"Lurfen Final Notunu Giriniz: "<<endl;
    cin>>finalNotu;

    vizeNotu=vizeNotu*0.4;
    finalNotu=finalNotu*0.6;
    toplam = vizeNotu+finalNotu;

    cout<<"Ortlamaniz: "<<toplam<<endl;

    if(89<toplam && toplam<=100){
        cout<<"Harf Notunuz: AA"<<endl;
    }

    else if(79<toplam && toplam<=88){
        cout<<"Harf Notunuz: BA"<<endl;
    }

    else if(69<toplam && toplam<=78){
        cout<<"Harf Notunuz: BB"<<endl;
    }

    else if(60<toplam && toplam<=68){
        cout<<"Harf Notunuz: CB"<<endl;
    }

    else if(50<toplam && toplam<=59){
        cout<<"Harf Notunuz: CC"<<endl;
    }

    else if(40<toplam && toplam<=49){
        cout<<"Harf Notunuz: DC"<<endl;
    }

    else if(31<toplam && toplam<=39){
        cout<<"Harf Notunuz: DD"<<endl;
    }

     else if(25<toplam && toplam<=30){
        cout<<"Harf Notunuz: FD"<<endl;
    }

    else if(0<toplam && toplam<=24){
        cout<<"Harf Notunuz: FF"<<endl;
    }

    else{
        cout<<"Hatalý Tuslama Girdiniz";
    }



return 0;
}
