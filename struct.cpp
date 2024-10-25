#include <iostream>
using namespace std;

   struct Student{
       string name;
       int rollNumber;
       float marks;
   };
   int main(){
       Student s1;
       s1.name="Shravani Sonawane";
       s1.rollNumber=105;
       s1.marks=89.8;
       cout<<"Name:"<<s1.name<<endl;
       cout<<"Roll Number:"<<s1.rollNumber<<endl;
       cout<<"Marks:"<<s1.marks<<endl;
       return 0;
   }