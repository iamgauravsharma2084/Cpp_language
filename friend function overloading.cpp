#include<iostream>
using namespace std;
class ABCD
{
  	int a;
  	public:
   friend ABCD operator+(ABCD,ABCD);//!we can overloading only those which are operators in c++
  
};

ABCD operator+(ABCD,ABCD)//Friend function score oberloading requres two operands.
  {
  	 
  	cout<<"Gaurav sharma";
  }
main()
{
	ABCD obj1;
	ABCD obj2;
	ABCD obj3;
    obj3=obj1+(obj2);  
}
