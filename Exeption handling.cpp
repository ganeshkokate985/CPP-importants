 #include<iostream>
using namespace std;
#include<string.h>//#include<cstring>
namespace NException
{
	class Exception
	{
		private:
			int lineNo;
			char errorMessage[40];
		public:
			Exception(int lineNo, char *errorMessage)
			{
				this->lineNo= lineNo;
				strcpy(this->errorMessage,errorMessage );
			}
			void PrintErrorMessage()
			{
				cout<<"Line No :: "<<this->lineNo<<endl;
				cout<<"Error Message :: "<<this->errorMessage<<endl;
				cout<<"File Name :: "<<__FILE__<<endl;
				cout<<"Date ::"<<__DATE__<<endl;
				cout<<"TIME ::"<<__TIME__<<endl;
			}
	}; //end of Exception class
}//end namespace
using namespace NException;
int main()
{
	int x=10, y=0, res=0;

	try
	{
		if(y==0)
		{
			//throw 1000; //int
			//throw 10.1; //double
			//throw 1.1f; // float
			//throw 'a';
			throw Exception(__LINE__+4, "Can not divide by 0");
		}
		else
		{
			res= x/y;
			cout<<"res="<<res<<endl;
		}
	}
	catch(int no)
	{
		cout<<"catched value ::"<<no<<endl;
		cout<<"inside int catch1"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int)
	{
		cout<<"inside int catch2"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(double)
	{
		cout<<"inside double catch"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(float)
	{
		cout<<"inside float catch"<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(Exception &ab)
	{
		cout<<"inside Exception catch"<<endl;
		ab.PrintErrorMessage();
	}
	catch(...) //ellipses generic catch
	{
		cout<<"inside generic catch"<<endl;
		cout<<"can not divide by zero"<<endl;
	}


	return 0;
}

