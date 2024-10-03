#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		int mark[4],total=0,avg,i;
		name1(){
			
			cout<<"enter name";
			cin>>name;
			
			cout<<"enter marks";	
			this->total=total;
			this->avg=avg;
			for(i=0;i<4;i++){
				cin>>mark[i];
				total= total +mark[i];
//						cout<<"toatl : data "<<total;	
			}

			avg=total/4;
			
			
		}
		
		result(){
		
			cout<<"toatal"<< this->total<<endl;
		cout<<"avg"<<this->avg;
		}	
};

class Faculty : public Student{
	public:
	
		
};

main(){
	int ch;
	
	cout<<"select below category: "<<endl;
	cout<<"1. Student"<<endl;
	cout<<"2. Faculty"<<endl;
		cout<<"3. exit"<<endl;
	
	Student obj;
	Faculty obj1;
	while(1){
		cout<<"enter choise:";
	cin>>ch;
		if(ch==1){
		
		obj.name1();
		
		
	}
	
	else if(ch==2){
		
		obj1.result();
	
	}
	else if(ch==3){
		
		break;
	
	}
	else{
		cout<<"invalid choise";
	}	
	}

}
