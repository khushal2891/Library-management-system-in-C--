#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class Library{
    public:
 int id;
 char Student[100];
 char Book[100];
 char author[100];
 int price;

};

int main (){
    
    Library lib[20];
    int input=0;
    int count = 0;

    while(input!=3){
        cout<<"Press 1 to give input: \n";
        cout<<"Press 2 to display: \n";
        cout<<"Press 3 to quit\n";
        cin>>input;

    switch(input){
        case 1:
            cout<<"Enter ID"<<endl;
            cin>>lib[count].id;
            cout<<"Enter student name"<<endl;
            cin.getline(lib[count].Student,100,'$');
            cout<<"Enter Book name "<<endl;
            cin.getline(lib[count].Book,100,'$');
            cout<<"Enter author name :"<<endl;
            cin.getline(lib[count].author,100,'$');
            cout<<"Enter price:"<<endl;
            cin>>lib[count].price;
            count++;
            break;

        case 2 :
         for (int i=0;i<count;i++){
            cout<<"ID : "<<lib[i].id<<endl;
            cout<<"Student name : "<<lib[i].Student<<endl;
            cout<<"Book name  : "<<lib[i].Book<<endl;
            cout<<"Author name  : "<<lib[i].author<<endl;
            cout<<"price : "<<lib[i].price<<endl;
         }
         break;

        case 3:
         return 0;
         
    }
}


    return 0;
}
