#include<iostream>
using namespace std;
class A{
	public:
		Home()
		{
			cout<<"Grandparent have home"<<endl;
		}
};

class B:public A{
	public:
		car()
		{
			cout<<"Father have car"<<endl;
		}
};
class C:public B{
	public:
	    Respect()
		{
			cout<<"Child has respect in market"<<endl;
		}
};

main()
{
	C obj;
	obj.Home();
	obj.car();
	obj.Respect();
}
