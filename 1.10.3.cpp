#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
	ifstream myfile("matrix_market.txt");
	string line;
	while(getline(myfile,line))
	{
	if(line[0] == '%') continue;
	string row,column,elements;
	stringstream ss(line) ;
	ss >> row >> column >> elements;
	cout << "Number of rows " << row << endl; 
	cout << "Number of columns " << column << endl;
	cout << "Number of elements "<< elements << endl;
	break;
	}
}
