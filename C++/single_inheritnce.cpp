

//inheritance:
//=>when one class derived the properties into another class it is called inheritance


//5 types for inheritnce 

//1)single
//2)multiple
//3)multilevel
//4)hierarchi
//5)hybrid


#include <iostream>
using namespace std;
class Parent{
public:
	hello()  // method name both class must be differnt 
	{	
		cout<<"Hello Parent"<<endl;
			
	}

};
class Child: public Parent{
public:
	hello2()  // parameter constructor  2 type it call starting site 
	{			
	cout<<"Hello Child"<<endl;		
	}

};

main(){
	Child obj;
	obj.hello();
	obj.hello2();
	
	
}

