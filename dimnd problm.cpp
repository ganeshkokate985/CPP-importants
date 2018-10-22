#include<iostream>
using namespace std;

	class A
	{
		public:
			int a;

			A()
			{
				this->a=10;
				cout<<"inside parameterless ctor of class A"<<endl;
			}
			A(int a)
			{
				this->a=a;
				cout<<"inside parameterized ctor of class A"<<endl;
			}
			void Print()
			{
				cout<<"Inside class A ::"<<endl;
				cout<<"this->a :: "<<this->a<<endl;
			}
			~A()
			{
				this->a=0;
				cout<<"inside dtor of class A"<<endl;
			}
	};
	class B:public A
	{
		public:
			int b;

			B()
			{
				this->b=20;
				cout<<"inside parameterless ctor of class B ::"<<endl;
			}
			B(int a, int b):A(a)
			{
				this->b=b;
				cout<<"inside parameterized ctor of class B ::"<<endl;
			}
			void Print()
			{
				A::Print();
				cout<<"inside class B ::"<<endl;
				cout<<"this->a :: "<<this->a<<endl;
				cout<<"this->b :: "<<this->b<<endl;
			}
			~B()
			{
				this->b=0;
				cout<<"inside dtor of class B ::"<<endl;
			}


	};
	class C:public A
	{
		public:
			int c;
			C()
			{
				this->c=30;
				cout<<"inside parameterless ctor of class C ::"<<endl;
			}
			C(int a, int c):A(a)
			{
				this->c=c;
				cout<<"inside parameterized ctor of class C ::"<<endl;
			}
			void Print()
			{
				A::Print();
				cout<<"inside class C ::"<<endl;
				cout<<"this->a :: "<<this->a<<endl;
				cout<<"this->c :: "<<this->c<<endl;
			}
			~C()
			{
				this->c=0;
				cout<<"inside dtor of class C ::"<<endl;
			}

		};
	//class D:public B, public C
	class D:public C, public B
	{
		public:
			int d;
			D()
			{
				this->d=40;
				cout<<"inside parameterless ctor of class D"<<endl;
			}
			D(int a, int b, int c,int d):B(a,b), C(a,c)
			{
				this->d=d;
				cout<<"inside parameterized ctor of class D"<<endl;
			}
			void Print()
			{
				B::Print();
				C::Print();
				cout<<"inside class D :: "<<endl;
				//cout<<"this->a :: "<<this->a<<endl;
				//error as a is twice in d from b and c

				cout<<"this->B::a  via class B:: "<<this->B::a<<endl;
				cout<<"this->C::a  via class C:: "<<this->C::a<<endl;

				cout<<"this->b :: "<<this->b<<endl;
				cout<<"this->c :: "<<this->c<<endl;
				cout<<"this->d :: "<<this->d<<endl;
			}
			~D()
			{
				this->d=0;
				cout<<"inside dtor of class D"<<endl;
			}


	};

int main()
{
	/*
	A objInstance1;
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"in side main objInstance1.a :: "<< objInstance1.a<<endl;

	A objInstance2(100);
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"in side main objInstance2.a :: "<< objInstance2.a<<endl;
*/
/*
	B objInstance1;
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"in side main objInstance1.a :: "<< objInstance1.a<<endl;
	cout<<"in side main objInstance1.b :: "<< objInstance1.b<<endl;

	B objInstance2(111,222);
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"in side main objInstance1.a :: "<< objInstance2.a<<endl;
	cout<<"in side main objInstance1.b :: "<< objInstance2.b<<endl;
*/


/*	C objInstance1;
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"in side main objInstance1.a :: "<< objInstance1.a<<endl;
	cout<<"in side main objInstance1.c :: "<< objInstance1.c<<endl;

	C objInstance2(333,444);
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"in side main objInstance1.a :: "<< objInstance2.a<<endl;
	cout<<"in side main objInstance1.c :: "<< objInstance2.c<<endl;

*/

	D objInstance1;
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
//	cout<<"in side main objInstance1.a :: "<< objInstance1.a<<endl;
	// diamond problem a is twice in class D one via class B one via class C

	//sol no1:
	cout<<"in side main objInstance1.B::a  via class B:: "<< objInstance1.B::a <<"["<<  &objInstance1.B::a<<" ] "   <<endl;
	cout<<"in side main objInstance1.C::a  via class C:: "<< objInstance1.C::a<<"["<<  &objInstance1.C::a<<" ] "   <<endl;

	cout<<"in side main objInstance1.b :: "<< objInstance1.b<<endl;
	cout<<"in side main objInstance1.c :: "<< objInstance1.c<<endl;
	cout<<"in side main objInstance1.d :: "<< objInstance1.d<<endl;

	/*
	D objInstance2(1,2,3,4);
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
//	cout<<"in side main objInstance1.a :: "<< objInstance2.a<<endl;
	cout<<"in side main objInstance1.b :: "<< objInstance2.b<<endl;
	cout<<"in side main objInstance1.c :: "<< objInstance2.c<<endl;
	cout<<"in side main objInstance1.d :: "<< objInstance2.d<<endl;
*/
	return 0;
}
