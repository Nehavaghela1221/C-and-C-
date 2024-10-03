#include <iostream>
using namespace std;
/* 
herichal

	A	
	|

B    	c

*/



class A{
	public:
		 fun1(){
		 	cout<<"hello class A "<<endl;
		 }
		
};
class B: public A{
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
main(){
	B obj1;

	obj1.fun1();
	obj1.fun2();
	
	C obj2;
	
	obj2.fun1();
	obj2.fun3();
}
