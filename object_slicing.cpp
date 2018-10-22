 #include<iostream>
using namespace std;
namespace NObjectSlicing
{
	class A
	{

			int a;
			int b;
	public:
			A()
			{
				this->a=0;
				this->b=0;
				cout<<"inside parameterless ctor of class A"<<endl;
			}
			A(int a, int b)
			{
				this->a=a;
				this->b=b;
				cout<<"inside parameterized ctor of class A"<<endl;
			}
			void Print()
			{
				cout<<"Inside class A ::"<<endl;
				cout<<"this->a :: "<<this->a<<endl;
				cout<<"this->b :: "<<this->b<<endl;
			}
			~A()
			{
				this->a=0;
				this->b=0;
				cout<<"inside dtor of class A"<<endl;
			}
	};
	class B: public A
	{
	private:
			int c;
	public:
			B()
			{
				this->c=0;
				cout<<"inside parameterless ctor of class B ::"<<endl;
			}
			B(int a, int b, int c):A(a, b)
			{
				this->c=c;
				cout<<"inside parameterized ctor of class B ::"<<endl;
			}
			void Print()
			{
				A::Print();
				cout<<"inside class B ::"<<endl;
				cout<<"this->c :: "<<this->c<<endl;

			}
			~B()
			{
				this->c=0;
				cout<<"inside dtor of class B ::"<<endl;
			}


	};

}// end of namespace
using namespace NObjectSlicing;
int main()
{

	A objInstance1;
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
cout<<"======================================="<<endl;


	B objInstance2(5, 6, 7);
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
cout<<"======================================="<<endl;
cout<<"==============object sliceing========================="<<endl;
	objInstance1=objInstance2;  // object slicing
	cout<<"objInstance1 :: "<<endl;
	objInstance1.Print();
cout<<"======================================="<<endl;

	//objInstance2=objInstance1;  // error
	cout<<"objInstance2 :: "<<endl;
	objInstance2.Print();



}
