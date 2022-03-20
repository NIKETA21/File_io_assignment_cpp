#include<iostream>
#include<fstream>
using  namespace std;
int main()
{
	char searching= '\0';
	string sentence = " ";
	int counter=0;
	fstream myfile;
	myfile.open("data_cpp.txt", ios::out);
	cout<<"write to this file";
	myfile<<"enter the sentence: "<<endl;
	getline(cin, sentence);
	cout<<"which letter you like to count to the number of times it appears : "<<endl;
	cin>>searching;
	for(int i ; i<sentence.length(); i++)
	{
		if(sentence[i] ==  searching)
		{
			counter++;
			
		}
	}
	cout<<"the letter "<<searching <<"appears"<<"counter  times"<<counter;
	return 0;
}
