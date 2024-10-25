#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void addStudent(){
    ofstream outFile("students.txt", ios::app);
    string name;
    int rollNumber;
    float grade;
    cout<<"Enter students name:";
    cin>>name;
    cout<<"Enter roll number:";
    cin>>rollNumber;
    cout<<"Enter grade:";
    cin>>grade;
    
    outFile<<name<<" "<<rollNumber<<" "<<grade<<endl;
    outFile.close();
    cout<<"Students record added!"<<endl;
}
void displayStudents(){
    ifstream inFile("students.txt");
    string name;
    int rollNumber;
    float grade;
    cout<<"Students Records:";
    while(inFile>>name>>rollNumber>>grade){
        cout<<"Name:"<<name<<",Roll Number:"<<rollNumber<<",Grade:"<<grade<<endl;
    }
    inFile.close();
    }
    void searchStudent(){
    ifstream inFile("students.txt");
    string name, searchName;
    int rollNumber;
    float grade;
    bool found=false;
    
    cout<<"Enter the student name to search:";
    cin>>searchName;
    
    while(inFile>>name>>rollNumber>>grade){
        if(name==searchName){
            cout<<"Student found! Name:"<<name<<",Roll Number:"<<rollNumber<<",Grade:"<<grade<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Student not found."<<endl;
        
    }
    inFile.close();
}
int main(){
    int choice;
    do{
        cout<<"1.Add Student"<<endl;
        cout<<"2.Display All Students"<<endl;
        cout<<"3.Search for Student"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice==1){
            addStudent();
        }else if(choice==2){
            displayStudents();
        }else if(choice==3){
            searchStudent();
        }
        }while(choice!=4);
        cout<<"Program Exited."<<endl;
        return 0;
}