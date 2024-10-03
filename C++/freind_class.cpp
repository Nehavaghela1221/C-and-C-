#include <iostream>
using namespace std;

class A{
	private:
		int a,i,fact=1;
		friend class B;// pass class name which u use variables
};
class B{
	public:
		
		func(A &obj){//passs parent class declare that calss objject
		cout<<"enter num :";
		cin>>obj.a;// using that object accecsee variable
		for(obj.i=1;obj.i<=obj.a;obj.i++){
			obj.fact*=obj.i;
		}	
		cout<<"enter num : "<<obj.fact;
	
		}
		
};

main(){
	A obj;
	B obj1;
	obj1.func(obj);
}
