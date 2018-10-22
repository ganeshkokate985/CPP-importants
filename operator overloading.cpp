#include<iostream>
using namespace std;

namespace NComplex
{
	class Complex
	{
		private:

			int real;
			int imag;
		public:

			void AcceptInputFromConsole()
			{
				cout<<"Enter Real ";
				cin>>this->real;
				cout<<"Enter Imag ";
				cin>>this->imag;
			}

			void PrintOutputOnConsole()
			{
				cout<<"this->real :: "<<this->real<<" [" << &this->real <<"]"<< endl;
				cout<<"this->imag :: "<<this->imag<<" [" << &this->imag <<"]"<< endl;

			}


			int GetReal()
			{
				return this->real;
			}
			int GetImag()
			{
				return this->imag;
			}


			void SetReal(int real)
			{
				this->real=real;
			}
			void SetImag(int imag)
			{
				this->imag=imag;
			}



			Complex():real(10), imag(20)
		{
			cout<<"inside parameterless ctor of Complex class"<<endl;
		}


			Complex(int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized ctor of Complex class"<<endl;
			}


			Complex( const Complex& other1 )
			{
				this->real=other1.real;
				this->imag=other1.imag;
			}


			Complex operator+( Complex& other1 )
			{

				Complex temp;
				temp.real=this->real+other1.real;
				temp.imag=this->imag+other1.imag;
				return temp;
			}	

			/*
			   Complex Sum( Complex& other1 )
			   {

			   Complex temp;
			   temp.real=this->real+other1.real;
			   temp.imag=this->imag+other1.imag;
			   return temp;
			   }	

*/


			~Complex()
			{
				cout<<"============================="<<endl;
			//	this->PrintOutputOnConsole();
				this->real=0;
				this->imag=0;
				cout<<" inside dtor of Complex class"<<endl;
			}


		Complex operator-(Complex& other1 );
		
	};



	Complex operator*(Complex& other1);				
	{ 
		Complex temp;
		



	}
	Complex Complex :: operator-(Complex& other1 )

	{

		Complex temp;
		temp.real=other1.real-this->real;
		temp.imag=other1.imag-this->imag;
		return temp;
	}

}

using namespace NComplex;
int main()
{
	Complex c1(10,20); 
	cout<<"c1 ::"<<endl;
	c1.PrintOutputOnConsole();

	Complex c2(1,2);
	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();

	//	Complex c3=c1.Sum(c2);
	Complex c3=c1+c2;
	cout<<"==========sumation========="<<endl;
	c3.PrintOutputOnConsole();
	Complex c4=c1-c2;

	return 0;
}

