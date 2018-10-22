#include<iostream>

using namespace std;

class array
{
	private:
		int size;
		int *arr;

	public:
		array(int size=5)
		{
			this->size=size;
			this->arr= new int [this->size];

			for(int i=0;i<this->size;i++)
			{ 
				this->arr[i]=0;

			}

		}

		array(const array& other1)
		{
			this->size = other1.size;
			this->arr = new int[this->size];
			{
				for(int i=0;i< this->size;i++)
				{
					this->arr[i]= other1.arr[i];

				}

			}


		}


		void accept()
		{
			for(int i=0;i<this->size;i++)
			{
				cout<<"arry ["<<i<<"]"<<endl;
				cin>>this->arr[i];

			}

		}

		void print()
		{

			for(int i=0;i<this->size;i++)
			{
				cout<<"element[ "<<i<<" ]   "<<this->arr[i]<<endl;

			}


		}


		
		~array()
		{
			this->size=0;
			if(this->arr!=NULL)
			{
			delete[] this->arr;
			this->arr=NULL;
			cout<<"memory is freed"<<endl;
			}
			

		}





};//end of class array



int main()
{
	array a1;
	cout<<"===object is created==="<<endl;
	a1.print();
	a1.accept();
	a1.print();
	array a2=a1;
	cout<<"=====object 2 is created====="<<endl;
	a1.accept();
	a1.print();
	return 0;
}
