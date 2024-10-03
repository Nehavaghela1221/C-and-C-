#include<iostream>
using namespace std;

class Encap{
	public:
		int c,d;
		fun1(int a,int b)
		{
			this->c=a;
			this->d=b;
		}
		fun2()
		{
			cout<<"A: "<<this->c<<endl;
			cout<<"B: "<<this->d<<endl;
			cout<<"Add: "<<this->c+this->d<<endl;
		}
};

main()
{
	Encap obj;
	obj.fun1(10,20);
	obj.fun2();
}
