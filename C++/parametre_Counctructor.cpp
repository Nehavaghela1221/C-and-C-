#include <iostream>
using namespace std;
class Myclass{
public:
	Myclass(int n)  // parameter constructor  2 type it call starting site 
	{	
		int i,fac=1;
		for(i=1;i<=n;i++){
				fac=fac*i;
		}
		cout<<fac;
			}

};
main(){
	Myclass obj(5);
	
}

