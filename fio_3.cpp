#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	   fstream fin("test.txt", ios::in | ios::out | ios::app);
	  int count = 0,i,n;
 	  char search = 'e';
	  char temp[10];

if(!fin)
{
	cout<<"File can't open!!\n";
}

else
{
  	while(!fin.eof())
    {

	fin>>temp;
	cout<<temp<<endl;
	n = strlen(temp);
	cout<<"len "<<n<<endl;
	if(temp[0]=='e')
	{
		count++;
		cout<<"count "<<count<<endl;
		//break;
	}
//break;
//cout<<count<<endl;
	cout<<endl;
   	 }
}

  	cout <<"The words that staerts with 'e' in 'tset3.txt' is: "<<count << endl;    

  	return 0;
}
