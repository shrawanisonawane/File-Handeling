#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFile("virtual.txt");
    ofstream outFile("virtual.txt");
    fstream File("virtual.txt" ,ios::in| ios::out);
    return 0;
}