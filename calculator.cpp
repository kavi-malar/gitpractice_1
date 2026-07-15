#include<iostream>
using namespace std;
int main()
{
  int num1,num2,res;
  char ch;
  cout<<"Enter num1:";
  cin>>num1;
  cout<<"Enter num2:";
	  cin>>num2;
	  cout<<"Enter operation(a-add,s-sub,m-mul,d-div):";
	  cin>>ch;
	  switch(ch)
	  {
             case 'a':
		     {
			     cout<<"Addition result is "<<num1+num2;
			     break;
		     }
	     case 's':
		     {
                         cout<<"Subtraction result is "<<num1-num2;
			 break;
		     }
	     case 'm':
		     {
<<<<<<< HEAD
                       cout<<"Product is "<<num1*num2;
=======
                       cout<<"Priduct is "<<num1*num2;
>>>>>>> version1calci
		       break;
		     }
	     case 'd':
		     {
                       cout<<"Division result is "<<num1/num2;
		       break;
		     }
	     default:
		     {
                        cout<<"Invalid";
		     }
	  }
	  return 0;

}
