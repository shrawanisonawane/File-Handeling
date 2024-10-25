#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string userInput;
    cout<<"Enter some text:";
    cin>>userInput;
    ofstream outFile("myfile.txt");
    if(outFile.is_open()){
        outFile<<userInput;
        outFile.close();
        cout<<"Data saved to File."<<endl;
    }
    else{
        cout<<"Error opening file for writing."<<endl;
    }
    string fileContent;
    ifstream inFile("myfile.txt");
    if(inFile.is_open()){
        getline(inFile,fileContent);
        inFile.close();
        cout<<"Data read from file:"<<fileContent<<endl;
    }
    else{
        cout<<"Error opening the file for reading."<<endl;
        
    }
    return 0;
    }
