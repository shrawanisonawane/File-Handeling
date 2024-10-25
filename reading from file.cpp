#include <iostream>
#include <fstream>
using namespace std;
int main(){
   ifstream inFile("virtual.txt");
   string line;
   if(inFile.is_open()){
       while(getline (inFile,line)){
           cout<<line<<endl;
           inFile.close();
       }
       }else{
           cout<<"Error:Could not open the file."<<endl;
    }
    return 0;
}