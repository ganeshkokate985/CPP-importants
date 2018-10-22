#include<iostream>
#include<stdlib.h>
using namespace std;

int menue();

class shape
{
	protected:
		int area;
	public:
		
		virtual void accept()=0;
		virtual void calculate()=0;
		virtual void print()=0;


};


class circle: public shape
{
	private:
		int r;

	public:
		void calculate()
		{
			area=(2*3.14*this->r*this->r);

		}
		void accept()
		{
			cout<<"enter radious for circle"<<endl;
			cin>>this->r;
		}
		void print()
		{
			cout<<" area of circle"<<this->area<<endl;
	
		}


};


class rectangle: public shape
{
	private:
		int a,b;

	public:
		void calculate()
		{
			area=(2*this->a*this->b);

		}
		void accept()
		{
			cout<<"enter lenth for rect"<<endl;
			cin>>this->a;

			cout<<"enter bredth for rect"<<endl;
			cin>>this->b;
	
		}
		void print()
		{
			cout<<" area of rect"<<this->area<<endl;
	
		}



};

int main()
{
	int choice;

	shape *ptr=NULL;
	do

	{
		choice=menue();
		switch(choice)
		{
			case 1:
				ptr = new circle();
				break;

			case 2: ptr= new rectangle();
					break;
			case 0:exit(0);

		}

		if(ptr!=NULL)
		{
			ptr->accept();
			ptr->calculate();
			ptr->print();
		}
	}while(choice!=0);
		

		return 0;
}


int menue()
{
	int ch;

	cout<<"1.circle\n2.rectangle\n0.exit"<<endl;
	cout<<"enter your choice\n"<<endl;
	cin>>ch;
	return ch;
}
