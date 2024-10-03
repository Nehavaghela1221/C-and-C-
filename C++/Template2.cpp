//templates  : using this withot declare data type we use all data type

#include <iostream>
using namespace std;

template  <typename T>
T max_num( T x, T y,T z){
	if(x>y){
		 if( x>z){
		 		cout<<"value 1 is gretest"<<endl;
		 }
		 
	}
	else if(y>z){
		cout<<"value 2 is gretest"<<endl;
	}
	else{
		cout<<"value 3 is gretest"<<endl;
	}
}

main(){
	max_num<int>(50,90,30);
	
}
