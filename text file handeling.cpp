#include <iostream>
#include <fstream>
using namespace std;
int main(){
   ofstream outFile("virtual.txt");
   if(outFile.is_open()){
       outFile<<"Hello,how are you?\n";
       outFile<<"Come on lets learn c++.\n";
       outFile.close();
       cout<<"Data written to file successfully."<<endl;
   }
   else{
       cout<<"Error: Colud not open the file."<<endl;
       }
    return 0;
}