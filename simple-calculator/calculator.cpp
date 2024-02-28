//calculator
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	do
	{
		cout<<"\t\t\t-----CALCULATOR-----"<<endl;
		cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n";
		cin>>c;
		cout<<"Enter the two numbers:";
		cin>>a>>b;
		switch(c)
		{
			case 1:
				cout<<"addition:"<<a+b<<endl;
				break;
			case 2:
				cout<<"substraction:"<<a-b<<endl;
				break;
			case 3:
				cout<<"Multiplication:"<<a*b<<endl;
				break;
			case 4:
				cout<<"division:"<<a/b<<endl;
				break;
			case 5:
				cout<<"....exit...."<<endl;
			default:
				cout<<"Please enter correct option..."<<endl;
		}
	}while(c!=5);
}
