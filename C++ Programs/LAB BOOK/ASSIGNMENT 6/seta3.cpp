#include <iostream>
using namespace std;

class Arr
{
	float *arr ;
	int size;
	public : 
		Arr(int n )
		{
			size = n ;
			arr = new float[size] ;
		}
		void accept()
		{
			int i;
			for( i = 0 ; i < size ; i++ )
			{
				cout << "Enter Element no : " << i+1 << endl ;
				cin >> arr[i] ;
			}
		}
		void display()
		{
			for( int i = 0 ; i < size ; i++ )
			{
				cout << arr[i] << "\t" ;
			}
		}
		friend void operator ++(Arr A1);
		friend void operator --(Arr A1);
};

void operator ++( Arr A1 )
{
	for (int i = 0 ; i < A1.size ; i++ )
	{
		A1.arr[i] = A1.arr[i] + 1 ;
	}
}

void operator --( Arr A1 )
{
	for (int i = 0 ; i < A1.size ; i++ )
	{
		A1.arr[i] = A1.arr[i] - 1 ;
	}
}


int main()
{
	int n ;
	cout << "How many elemets in array : " ;
	cin >> n ;
	Arr A1(n);
	A1.accept();
	++A1 ;
	cout << "\nArray after ++ operation " << endl ;
	A1.display();
	cout << "\n\nArray after -- operation " << endl ;
	--A1 ;
	A1.display();
}
