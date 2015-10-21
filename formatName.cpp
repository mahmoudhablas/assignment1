#include<iostream>
#include<string>
using namespace std;
class Person
{
private :
	static const int T = 25;
	string ln;
	char fname[T];
public:
	Person(){ln="";fname[0]='\0';}
	Person(const string &lnam ,const char *fn="heyyou")
	{
		ln=lnam;
		strcpy(fname, fn);
	}
	Person add(int x)
	{
		Person a =Person("ahmed");
		return a;
	}
	void show()
	{
		cout<<"firstName  "<< this->fname<<"  LastName  "<< this->ln<<endl;
	}
	void format()
	{
		cout<<"lastName  "<< this->ln<<"  firstName  "<< this->fname<<endl;
	}


};
void main()
{
	
	Person one; // use default constructor
  Person two("Smythecraft"); // use #2 with one default argument
  Person three("Dimwiddy", "Sam"); // use #2, no defaults
  one.show();
  cout << endl;
  one.format();
  // etc. for two and three
  two.show();
  two.format();
  
  cout << endl;
  three.show();
  three.format();
  cout << endl;
  one=one.add(1);
  one.show();

	system("pause");
}
