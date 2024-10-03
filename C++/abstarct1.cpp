//abstrction dataa hideing

#include <iostream>
using namespace std;

class A{
//abstarct class
	public:
		virtual department()=0;//pure virtual function
};
		
class Neha : public A{
	public:
		hello(){
			cout<<"hello frmo neha"<<endl;
		}
		department(){
			cout<<"she is IT head"<<endl;
		}
};

class Savita : public A{
	public:
		hello2(){
			cout<<"hello frmo savita"<<endl;
		}
		department(){
			cout<<"she is H R head"<<endl;
		}
};
class Trupti : public A{
	public:
		hello3(){
			cout<<"hello frmo Trupti"<<endl;
		}
		department(){
			cout<<"she is Mangment head"<<endl;
		}
};

main(){
	Neha obj;
	obj.hello();
	obj.department();
	
	Savita obj1;
	obj1.hello2();
	obj1.department();

	Trupti obj2;
	obj2.hello3();
	obj2.department();
}
