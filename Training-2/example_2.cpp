#include <iostream>
using namespace std;
int f1=0,f2=1,f=0,sayac=0,a;
bool kactaneokundu=false;
main(){
if(!kactaneokundu){
    cout<<"Kac Fibonacci serisi: "<<endl;
    cin>>f;
    kactaneokundu=true;
    if(f<0){
        cout<<"Hatali Tuslama Yaptiniz"<<endl;
        return 0;
    }

    else if(f==1){
        cout<<f1<<endl;
        sayac=1;
    }
    else if(f==2){
        cout<<f1<<endl;
        cout<<f2<<endl;
        sayac=2;
    }
    main();
}

else{
    if(sayac<f){
        int fn =(f1+f2);
        cout<<fn<<endl;
        f1=f2;
        f2=fn;
        sayac++;
        main();
    }

}

return 0;
}

