#include <iostream>
using namespace std;

class Bank{
	public:
		int acno,balance=  5000,de,we;
		string name;
		create(){
			cout<<"enter name : ";
			cin>>name;
			
			cout<<"enter account num : ";
			cin>>acno;
			
			cout<<"your payment is : "<<balance<<endl;
			this->balance=balance;
		}
		deposite(){
			
			cout<<"eneter amount deposite : ";
			cin>>de;
			this->balance=this->balance+de;	
		}
		
		withdrawl(){
			cout<<"enter wmount withdrawl : ";
			cin>>we;
			if(we>this->balance){
				cout<<"not suficent balance";
			}
			else{
					this->balance=this->balance-we;
			}
			
		}
		bal(){
			cout<<"avl balcnce: "<<this->balance;
		}
};

main(){
	Bank obj;
	int ch ,ch1;
	cout<<"ch 1 create account"<<endl;
	cout<<"ch 2 exit"<<endl;
	
	cout<<"enter choise: " <<endl;
	cin>>ch;
	
	if(ch==1){
		obj.create();
		
		while(1){
		cout<<"ch 1 avl balance"<<endl;
		cout<<"ch 2 deposite"<<endl;
		cout<<"ch 3 widthrwal"<<endl;
		cout<<"ch 4 exit"<<endl;
		
		
		cout<<"enter choise"<<endl;
		cin>>ch1;
		
		if(ch1==1){
			obj.bal();
		}
		
		else if(ch1==2){
			obj.deposite();
			
		}
		else if(ch1==3){
			
			obj.withdrawl();
		}
		else if(ch1==4){
			cout<<"thank you";
			break;
		}
		else{
			cout<<"invalid choice";
			
			
			
			
			
		}
		}
	}
}
	
		
