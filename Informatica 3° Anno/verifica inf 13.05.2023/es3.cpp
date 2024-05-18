#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	string scritta;
	ifstream file1("file1.txt");
	
	while(!(file1.eof()))
	{
		file1>>scritta;
		ofstream file3("file3.txt",ios::app);
		file3<<scritta;
	}
	
	ifstream file2("file2.txt");
	
	while(!(file2.eof()))
	{
		file2>>scritta;
		ofstream file3("file3.txt",ios::app);
		file3<<scritta;
	}
}