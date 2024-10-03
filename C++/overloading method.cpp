//overloading method
#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"Hello"<<endl;
		}
		myfun(int a,int b)
		{
			cout<<"Welcome"<<endl;
		}
		myfun(string a)
		{
			cout<<"C++"<<endl;
		}
};

main()
{
	A obj;
	obj.myfun();
	obj.myfun(10,20);
	obj.myfun("Sefin");
}
