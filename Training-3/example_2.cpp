#include <iostream>
using namespace std;
main(){
   int deneme;

    cout<<"Lurfen Bir Sayi Giriniz: "<<endl;
    cin>>deneme;

    if(deneme%2==1 || (deneme%2)==(-1)){
         cout<<"Girdiginiz sayi tektir."<<endl;
         main();
    }

    else{
        cout<<"Girdiginiz sayi Cifttir."<<endl;
         main();
    }



return 0;
}
