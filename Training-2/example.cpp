#include <iostream>
using namespace std;
bool isimokundu=false;
 string ad;
 int uzunluk=0, harfindex=0;
main(){
if(!isimokundu){

    cout<<"Adinizi Giriniz: ";
    cin>>ad;
    isimokundu=true;
    uzunluk=ad.length();

    main();
}

else{
    cout<<ad[harfindex]<<endl;

    if(harfindex<uzunluk){
    ++harfindex;
    main();
    }

    else{
        isimokundu=false;
        harfindex=0;
        main();
    }
}
return 0;
}
