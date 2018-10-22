#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class veg
{
	private:
		int a;
		int b;


	public:
		veg(int a,int b):a(a),b(b)
	{
		cout<<"inside parameterless of veg "<<endl;

	}
		void print()
		{
			cout<<"Panneerr !!!	Masharum!! "<<endl;
			cout<<this->a<<"		"<<this->b<<endl;
		}

		~veg()
		{
			this->a=0;
			this->b=0;
			cout<<"dtcor of veg"<<endl;

		}

};
class nonveg
{
	private:
		int c;
		int d;


	public:
		nonveg(int c,int d):c(c),d(d)
	{
		cout<<"inside parameterless of nonveg "<<endl;

	}
		void print()
		{
			cout<<" chicken!!		maton!!  "<<endl;
			cout<<this->c<<"\t\t"<<this->d<<endl;
		}


		~nonveg()
		{
			this->c=0;
			this->d=0;
			cout<<"dtcor of nonveg"<<endl;

		}

};


class hotel

{
	private:
		string name;
		veg pricev;
		nonveg pricen;

	public:
		hotel(string name, int a, int b, int c, int d):pricev(a,b),pricen(c,d)
		{
			//strcpy(this->name,name);
			this->name=name;
			cout<<"inside hotel ctor"<<endl;

		}

	void print()
		{
			cout<<"hotel name::"<<this->name<<endl;
			cout<<"price veg ::"<<"\t"<<endl;
			this->pricev.print();
			
			cout<<"price of non-veg::"<<"\t"<<endl;
			this->pricen.print();
		}





};




int main()

{
hotel H1(" !! SIVA !! ",100,120,300,400);
cout<<"===========object=========="<<endl;
H1.print();

return 0;



}
