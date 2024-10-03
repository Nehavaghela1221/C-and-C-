//abstrction dataa hideing

#include <iostream>
using namespace std;

class Company{
//abstarct class
	public:
		virtual Increment()=0;//pure virtual function
		virtual decrement()=0;
};
		
class Neha : public Company{
	public:
		hello(){
			cout<<"hello frmo neha"<<endl;
		}
		Increment(){
			cout<<"Neha increment 1000"<<endl;
		}
		decrement(){
			cout<<"Neha decrement 500"<<endl;
		}
};

class Savita : public Company{
	public:
		hello1(){
			cout<<"hello frmo Savita"<<endl;
		}
		Increment(){
			cout<<"Savita increment 2000"<<endl;
		}
		decrement(){
			cout<<"Savita decrement 800"<<endl;
		}
};

class Trupti : public Company{
	public:
		hello2(){
			cout<<"hello frmo Trupti"<<endl;
		}
		Increment(){
			cout<<"Trupti increment 2000"<<endl;
		}
		decrement(){
			cout<<"Trupti decrement 300"<<endl;
		}
};
main(){
	Neha obj;
	obj.hello();
	obj.Increment();
	obj.decrement();
	
	Savita obj1;
	obj1.hello1();
	obj1.Increment();
	obj1.decrement();

	Trupti obj2;
	obj2.hello2();
	obj2.Increment();
	obj2.decrement();
}
