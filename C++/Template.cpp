//templates  : using this withot declare data type we use all data type

#include <iostream>
using namespace std;

template  <typename T>
T max_num( T x, T y){
	if(x>y){
		cout<<"value 1 is gretest"<<endl;
	}
	else{
		cout<<"value 2 is gretest"<<endl;
	}
}

main(){
	max_num<int>(10,20);
	max_num<char>('a','b');
}
