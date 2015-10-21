#include <iostream>
#include<string>
using namespace std;
class BankAccount {
private:
	string name;
	string accountnum;
	double balance;
public:
	BankAccount()
	{
		name="";
		accountnum="\0";
		balance = 0;
	}
	BankAccount(string n,string num,double b)
	{
		name =n;
		accountnum = num;
		balance =b;
	}
	void Display()
	{
		cout<<"your name is :"<<name<<endl<<"your account num is: "<<accountnum<<endl<<"the balance is: "<<balance<<endl;
	}
	void depoist(double b)
	{
		if(b>0)
			balance +=b;
	}
	void withdraw(double a)
	{
		if(balance>a)
			balance -=a;
	}
};

void main()
{
	BankAccount a("mahmoud","15423",100);
	a.Display();
	a.depoist(25);
	a.Display();
	a.withdraw(30);
	a.Display();
system("pause");
}
