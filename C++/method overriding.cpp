// method overriding
#include<iostream>
using namespace std;

class A{
	public:
		
		hello()
		{
			cout<<"This is Overriding"<<endl;
		}
};

class B:public A{
	public:
		
		hello()
		{
			A::hello(); //  '::'scope resolution operator
			cout<<"This is Overriding 2!!"<<endl;
		}
};

main()
{
	B obj;
	obj.hello();
}
