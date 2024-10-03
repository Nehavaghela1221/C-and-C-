#include <iostream>
using namespace std;
/* 
herichal

		A	
		|

B    	c
	|
	D

*/

class A{
	public:
		 fun1(){
		 	cout<<"hello class A "<<endl;
		 }
		
};
class B{
	public:
		 fun2(){
		 	cout<<"Welcome Using B class"<<endl;
		 }
		
};
class C :public A{
	public:
		 fun3(){
		 	cout<<"Welcome Using C class"<<endl;
		 }
		
};
class D :public B,public C{
	public:
		 fun4(){
		 	cout<<"Welcome Using D class"<<endl;
		 }
		
};
main(){
	D obj;

	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
}
