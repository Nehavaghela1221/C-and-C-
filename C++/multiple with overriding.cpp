#include<iostream>
using namespace std;
class A{
	public:
		hello()
		{
			cout<<"Hello"<<endl;
		}
};

class B{
	public:
		hello()
		{
			cout<<"Welcome"<<endl;
		}
};
class C:public A,public B{
	public:
		hello()
		{
			A::hello();
			B::hello();
			cout<<"This is Multiple Inheritance with method Overriding"<<endl;
		}
};

main()
{
	C obj;
	obj.hello();
}
