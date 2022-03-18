#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main( )
{

	ifstream fin("my_data.txt");//opening file
	int count= 0;
	char ch[20], c[20 ] = "the"; // initializing with the word which need to find.
	//cin>>c;
	while(fin)
	{
	
		fin>>ch;// writng to file 
		if(strcmp(ch,c)==0) //comparing file written content with the c="the " word.
		  count++;
	}
	cout<<"occurance of the in the file ="<<count <<endl;
	fin.close( ); //closing the file.
	return 0;
	
}
