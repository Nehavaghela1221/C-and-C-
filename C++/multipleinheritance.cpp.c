//student Management System
#include<iostream>
using namespace std;
class A{
	 protected:
	    string name;
		int rno,m,s,e,total;
		float pr;
		  public:
              getname()
              {
          	    cout<<"Enter Name : ";
          	    cin>>name;
		      }
              getr()
              {
       	        fflush(stdin);
       	        cout<<"Enter Roll no : ";
       	        cin>>rno;
	          }
	          
};

class B:public A{
	public:
		marks()
		{
			cout<<"Enter Marks for Maths : ";
			cin>>m;
			cout<<"Enter Marks for English : ";
			cin>>e;
			cout<<"Enter Marks for Science : ";
			cin>>s;
			
			total = m+e+s;
			cout<<"Total is : "<<total<<endl;
			
			pr= total/3;
			
			cout<<"Percentage : "<<pr<<endl;
			
		}
		
};
class C:public B{
	public:
		 condition()
		 {
	    	if(pr>70)
	        {
	          cout<<"Destinction"<<endl;
            }    
    
	        else if(pr<60)
	        {
			  cout<<"First class"<<endl;
	        }
	       
		    else if(pr<50)
	        {
			  cout<<"Second class"<<endl;
	        }
	 
	        else if(pr<40)
	        {
			  cout<<"Third class"<<endl;
	        }
	        
	        else
	        {
			   cout<<"Fail"<<endl;
	        }
		}
};

main()
{
	C obj;
	obj.getname();
	obj.getr();
	obj.marks();
	obj.condition();
}
