#include <iostream>
using namespace std;

class A{
	private:
		int a,i,fact=1;
		friend  B(A &obj);// pass methodd which u pass variable
};
B(A &obj){

	
		cout<<"enter num :";
		cin>>obj.a;
		for(obj.i=1;obj.i<=obj.a;obj.i++){
			obj.fact*=obj.i;
		}	
		cout<<"enter num : "<<obj.fact;
	
		
		
};

main(){
	A obj;
	B(obj);
}
