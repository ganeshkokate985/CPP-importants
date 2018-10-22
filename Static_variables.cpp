#include<iostream>

using namespace std;

class stat
{
	private:
			int id;
			int a;
			int b;
			static int counter;
	public:
			stat ()
			{
				++stat::counter;
				this->id=counter;
				this->a=20;
				this->b=30;
				
			}
			stat(int a,int b)
			{
				stat::counter=0;
				this->id=stat::counter;
				this->a=a;
				this->b=b;

			}

		void printData()
			{
				cout<<"counter value is"<<stat::counter<<endl;
				cout<<"object value"<<this->id<<endl;
				cout<<"value of a is"<<this->a<<endl;
				cout<<"value of b is "<<this->b<<endl;

				cout<<"========================="<<endl;
			}
		
};
int stat::counter;



int main()

{

stat e1;
e1.printData();

stat e2;
e2.printData();

stat e3;
e3.printData();

stat e4(10,20);
e4.printData();

return 0;
}
