#include<iostream>
using namespace std;
class solution
{

	public:
		static int sum (int no1,int no2 )
		{
			return no1+no2;

		}

		static int mul(int no1,int no2)
		{
			return no1*no2;
		}

};

int main()
{
	int add,pro,result;
	add=solution::sum(20,10);
	cout<<"addion is "<<add<<endl;

	pro=solution::mul(10,10);
	cout<<"addion is "<<pro<<endl;


	solution s1,s2;
	result=s1.mul(10,20);
	cout<<result<<endl;
	result=s2.sum(20,30);
	cout<<result<<endl;







return 0;

}

