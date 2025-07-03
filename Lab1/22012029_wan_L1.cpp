/*
ID = 22012029
Name = Wan Ayuni Humairaq binti Wan Nami
*/


#include <iostream>
using namespace std;

struct Student{
    
    int id;
    string name;
    string contact;
    string email;
    
};


int main()
{
    Student students[5];
    
    for (int i = 0; i<5; ++i){
        cout<<"Enter details for student "<<i+1<<":\n";
        cout<<"ID: ";
        cin>>students[i].id;
        cin.ignore();
        
        cout<<"Name: ";
        getline (cin,students[i].name);
        
        cout<<"Contact: ";
        getline (cin,students[i].contact);
        
        cout<<"Email: ";
        getline (cin,students[i].email);
        
        cout<<endl;
        
    }
    
    cout<<"\n====== STUDENT DETAILS ======\n";
    
    for(int i = 0; i < 5; ++i){
        cout<<"Student "<<i+1<<":\n";
        cout<<"ID: "<<students[i].id<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Contact: "<<students[i].contact<<endl;
        cout<<"Email: "<<students[i].email<<endl;
        cout<<endl;
    }
    
    return 0;
}