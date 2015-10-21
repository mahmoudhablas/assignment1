#include<iostream>
#include<string>
using namespace std;


class Move
{
private:
	double x;
	double y;
public:
	Move(){x=0;y=0;}
	Move(double a,double b)
	{
		x=a;
		y=b;
		
	}
	void showmove()
	{
		cout<<"x is : "<<x<<endl<<"y is : "<<y<<endl;
	}
	Move add(const Move & m)
	{
		double xnew =this -> x +m.x;
		double ynew =this -> y +m.y;
		Move n(xnew,ynew);
		return n;
	}
	void rest(double a,double b)
	{
		x=a;
		y =b;
	}

};


void main()
{
	Move mo;
  cout << "initial move object:\n";
  mo.showmove();
  cout << "reset x=1,y=2:\n";
  mo.rest(1,2);
  mo.showmove();
  cout << "add x by 3, and y by 4:\n";
  Move mo2(3,4);
  mo = mo.add(mo2);
  mo.showmove();
	system("pause");
}