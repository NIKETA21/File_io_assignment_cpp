#include<iostream>
#include<fstream>
using namespace std;

class student
{
	int id;
	char name[25];
	float marks;
	char loc[25];

void getdata()
{

	cout<<"Enter details\n";
	cout<<"Enter ID: ";
	cin>>id;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter marks: ";
	cin>>marks;
	cout<<"Enter Location: ";
	cin>>loc;
}

public:
void addrecord()
{
	fstream f;
	student stu;
	f.open("student1.dat", ios::app);
	stu.getdata();
	f.write((char*)&stu, sizeof(stu));
	f.close();
}


void display(int n)
{
	int i;
	fstream f;
	student s;
	f.open("student1.dat", ios::in|ios::binary);

while(!f.eof())
{

	f.read((char*) &s, sizeof(s));
	cout<<"Roll "<<s.id<<" ,name "<<s.name<<" ,mark "<<s.marks<<" ,Location "<<s.loc<<endl;}
	f.close();
 }
};

int main()
{
	student s1;
	char ch;
	int count=0,op;
	while(1)
	{
		printf("Enter your choice\n");
		printf("1. Enter Student details\n2. Display Student details\n3. For exit");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			do
			{
				s1.addrecord();
				cout<<"want to add more?(y/n)"<<endl;
				ch=getchar();
				ch=getchar();
				count++;
			}
			while(ch=='y'|| ch=='Y');
			cout<<"updated!"<<endl;
			break;

			case 2:
			s1.display(count);
			break;

			case 3:
			exit(0);

			default:
			printf("Invalid Input");
			break;
		}
}

return 0;
}
