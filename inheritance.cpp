#include<iostream>
#include<string.h>
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
		char name[20];
		veg pricev;
		nonveg pricen;

	public:
		hotel(char * name, int a, int b, int c, int d):pricev(a,b),pricen(c,d)
		{
			strcpy(this->name,name);
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

class pune:public hotel
{

	private:
		int area;
		
	public:
		pune(int area, char * name, int a, int b, int c, int d):hotel(name,a,b,c,d)

		{
			this->area=area;

		}

		void print()
		{
		cout<<"area is ======"<<area<<endl;
		hotel::print();	

		}

		~pune()
		{ 
			this->area=0;
			cout<<"==dctor of pune==="<<endl;

		}
};




int main()

{
pune H1(422103," !! SIVA !! ",100,120,300,400);
cout<<"===========object=========="<<endl;
H1.print();

return 0;



}
