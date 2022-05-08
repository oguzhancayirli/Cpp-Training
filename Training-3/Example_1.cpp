#include <iostream>
using namespace std;
main(){
    int deneme;

    cout<<"Lurfen Bir Sayi Giriniz: "<<endl;
    cin>>deneme;

    switch(deneme%2){
        case 1:
            cout<<"Girdiginiz sayi tektir."<<endl;
            main();
        break;

        case 0:
            cout<<"Girdiginiz sayi cifttir."<<endl;
            main();
        break;
    }


return 0;
}
