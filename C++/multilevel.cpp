#include <iostream>
using namespace std;
/* 
multiple

A		B
	|

	c

*/



class A{
	public:
		 fun1(){
		 	cout<<"hello"<<endl;
		 }
		
};
class B{
	public:
		 fun2(){
		 	cout<<"Welcome"<<endl;
		 }
		
};
class C :public A,public B{
	public:
		 fun3(){
		 	cout<<"Neha"<<endl;
		 }
		
};
main(){
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
