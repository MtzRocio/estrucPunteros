#include <iostream>
#include <conio.h>

using namespace std;

struct dato{
int dato1;
char dato2[20];
};

struct dato var1;
struct dato*ptr;


struct dato var2;
struct dato*ptr2;

int main(){
ptr=&var1;
cout<<"dato 1: "<<endl;
//cin>>ptr->dato1;
cin>>(*ptr).dato1;
cout<<"dato 2; "<<endl;
//cin>>ptr->dato2;
cin>>(*ptr).dato2;

cout<<"punteros: "<<&ptr<<endl;
cout<<"direccion del puntero: "<<&var1;
cout<<"\n"<<ptr<<endl;

cout<<"puntero 2: "<<&ptr2<<endl;
cout<<"direccion del puntero 2: "<<&var2;
cout<<"\n"<<ptr2<<endl;
return 0;
}


