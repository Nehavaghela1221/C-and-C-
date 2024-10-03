#include <iostream>
using namespace std;
class Myclass{
public:
	Myclass()  //constructor it call starting site 
	{
		cout<<"Hello Neha Welcome"<<endl;
		
	}
	prime() //method
	{
		int n,i,prime=0;
		cout<<"Enter number:";
		cin>>n;
		for(i=1;i<=n;i++){
			if(n%i==0){
				prime++;
		}
			
		}
		if(prime==2){
				cout<<"numvre is prime"<<endl;
				
			}
			else{
				cout<<"not prime"<<endl;
			}
	}
	~Myclass()    //destuctor it call end of sites exuction
	{
		cout<<"thank u for visiting our site...."<<endl;	
	}
};
main(){
	Myclass obj;
	obj.prime();
}

