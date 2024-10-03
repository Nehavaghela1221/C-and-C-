#include<iostream>
using namespace std;
class Myclass{
	public:
	int a,b;
	show()
	{
		cout<<"Enter A:";
		cin>>a;
		cout<<"Enter B:";
		cin>>b;
	}
	add()//method
	{
		//andar bi declare karay and bar biju funtion banai ne bi....
//		int a,b;
//		cout<<"Enter A:";
//		cin>>a;
//		cout<<"Enter B:";
//		cin>>b;
		cout<<"addition is:"<<a+b<<endl;
	}
	sub()
	{
		cout<<"substraction is:"<<a-b<<endl;
	}
	mul()
	{
		cout<<"multiplictaion is:"<<a*b<<endl;
	}
};
main()
{
	Myclass obj;
	obj.show();
	obj.add();
	obj.sub();
	obj.mul();
	
}
