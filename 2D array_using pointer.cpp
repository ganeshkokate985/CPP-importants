#include<iostream>
using namespace std;




class matrix
{
	private:

		int **arr;
		int row,col;

	public:

		matrix( int row,  int col)
		{
			this->row= row;
			this->col= col;
		
			


				cout<< "size of memory1 "<<sizeof(arr[])<<endl;
		//	for(int i=0;i<row;i++)
		//	{
		//		this->arr[row]=new int [this->col];
		//		cout<< "size of memory "<<sizeof(arr)<<endl;

		//	}

		}

		void accept()
		{
			int i,j;

			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{

			   			cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<endl;
						cin>>this->arr[i][j];
				}
				return;

			}
		}



		void printa()
		{
			int i,j;
			cout<<"array elements are ::  "<<endl;

			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{

			   			cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<endl;
						cin>>this->arr[i][j];
				}

			}
			return;
		}



		~matrix()
		{
			this->row=0;
			this->col=0;
			delete [] this->arr;
			this->arr=NULL;
		}



};



int main()
{
	matrix m1(2,2);
//	m1.accept();
//	m1.printa();
	
	return 0;

}

