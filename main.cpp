#include <iostream>
#include <windows.h>
using namespace std;

void color(int c){
    switch(c){
        case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7); break;
        case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14); break;
        case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10); break;
        case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12); break;
    }
}
void tru1(){                //Trojkat prostokatny
    int a, wy=0;
    string x="@";
    cout<<"Podaj dlugosc boku\n";
    cin>>a;
    color(1);//koloruje napisy
    while(wy<a){
        cout<<x<<endl;
        x=x+" @";
        wy++;
    }
    color(0);//koloruje napisy
}
void tru2(){                //Trojkat rownoboczny
    int a, i=0, wy=0, sz=0, wy2;
    string x="@";
    cout<<"Podaj dlugosc boku\n";
    cin>>a;
    wy=(a/2)+1;
    wy2=wy;
    color(1);//koloruje napisy
    while(i<wy){
        sz=0;
        while(sz<wy2-1){
            cout<<"  ";
            sz++;
        }
        cout<<x;
        sz=0;
        while(sz<wy2-1){
            cout<<"  ";
            sz++;
        }
        cout<<endl;
        x=x+" @ @";
        i++;
        wy2--;
    }
    color(0);//koloruje napisy
}
void kwadrat(){
    int a;
    cout<<"Podaj dlugosc boku\n";
    cin>>a;
    color(1);//koloruje napisy
    for(int i = 1; i<=a; i++){
        for(int i = 1; i<=a; i++){
            cout<<"@ ";
        }
        cout<<endl;
    }
    color(0);//koloruje napisy
}
void prostokat(){
    int a, wy;
    cout<<"Podaj dlugosc podstawy\n";
    cin>>a;
    cout<<"Podaj dlugosc wysokosci\n";
    cin>>wy;
    color(1);//koloruje napisy
    for(int i = 1; i<=wy; i++){
        for(int i = 1; i<=a; i++){
            cout<<"@ ";
        }
        cout<<endl;
    }
    color(0);//koloruje napisy
}
int main(){
    int lic;
    color(2);//koloruje napisy
    cout<<"Co chcesz narysowac?\n";
    color(0);//koloruje napisy
    cout<<"1 - Trojkat prostokatny\n";
    cout<<"2 - Trojkat rownoboczny\n";
    cout<<"3 - Kwadrat\n";
    cout<<"4 - Prostokat\n";
    color(3);//koloruje napisy
    cout<<"5 - Wyczysc\n";
    color(0);//koloruje napisy
    cin>>lic;
    switch(lic){
        case 1: tru1(); break;
        case 2: tru2(); break;
        case 3: kwadrat(); break;
        case 4: prostokat(); break;
        case 5: system("cls"); break;
    }
    main();
    return 0;
}
