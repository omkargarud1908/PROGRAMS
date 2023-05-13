#include <iostream>
#include <string.h>
using namespace std;

class Str 
{
	char *ptr ;
	int n ;

	public :
		 Str( int n )
		{
			this->n = n ;
			ptr = new char[n] ;	
		}	

		Str()
		{
		}
				
		void accept()
		{
			cout << "Enter String : " ;
			cin >> ptr ;
		}	
		
		void display()
		{
			cout << ptr << endl ;
		}		
		
	void operator ! ()
	{
		for ( int i = 0 ; i < strlen(ptr) ; i++ )
		{
			if ( ptr[i] >= 65 && ptr[i] <= 96 )
			{
				ptr[i] += 32 ;
			}
			else 
				ptr[i] -=  32 ;
		}
	} 
	char& operator [] ( int n )
	{
		if( n < 0 || n >= strlen(ptr))
		{
			cout << "Index out of range " << endl ;
		}
		else
			return ptr[n] ;
	}
	
	friend void operator < ( Str s1 , Str s2 );
	friend void operator == ( Str s1 , Str s2 );
	friend void operator + ( Str s1 , Str s2 );
	friend istream & operator >> ( istream &out , Str &s1 );
	friend ostream & operator << ( ostream &in , Str &s1 );
	
};

istream & operator >> (istream &in ,  Str &s1 )
{
	cout << "Enter String " << endl ;
	in >> s1.ptr ;
	return in ;
}

ostream & operator << (ostream &out ,  Str &s1 )
{
	
	out << s1.ptr << endl ;
	return out ;
}

void operator < ( Str s1 , Str s2 )
{

	if( strlen(s1.ptr) < strlen(s2.ptr) )
	{
		cout << "String 2 is bigger " << endl ;	
	}
	else if( strlen(s1.ptr) > strlen(s2.ptr) )
	{
		cout << "String 1 is bigger " << endl ;	
	}
	else
		cout << "Both strings are of same size " << endl ;	

}

void operator == ( Str s1 , Str s2 )
{
	if( strcmp(s1.ptr , s2.ptr)== 0 )
		cout << "Both strings are equal " << endl ;
	else
		cout << "Strings are not equal " << endl ;
}		

void operator +  ( Str s1 , Str s2 )
{
	char *temp = new char[ strlen(s1.ptr) + strlen(s2.ptr) + 1 ];
	temp = strcat( s1.ptr , s2.ptr ) ;
	cout << "Concatneted Strings : " << temp << endl ;
	delete temp ;
}

int main()
{	
	int n , pos ,ch ;
	cout << "Enter size of string 1 : " ;
	cin >> n ;
	Str s1(n) ;
	s1.accept() ;
	s1.display() ;	
	cout << "Enter size of string 2 :" ;
	cin >> n ;
	Str s2(n) ;
	s2.accept() ;
	s2.display() ;
	Str s3(6) ;
	do 
	{
		cout << " 1 . ! -: reverse string " << endl ;
		cout << " 2 . [] -: print char at specific index " << endl ;
		cout << " 3 . < -: compare length of two strings " << endl ;
		cout << " 4 . == -: check equality of two strings " << endl ;
		cout << " 5 . + -: Concatenate two strings " << endl ;
		cout << " 6 . >> -: insert values in Str class " << endl ;
		cout << " 7 . << -: print values from str class " << endl ;
		cout << " 8 . exit " << endl ;
		cout << "Enter your choice : " ;
		cin >> ch ;
		switch(ch)
		{
			case 1 :					
				cout << "String before reversing : " ;
				s1.display() ;
				!s1 ;
				cout << endl <<"String after reversing : " ;
				s1.display() ;
				break ;
			case 2 :		
				cout << "Enter index to display character : " ;
				cin >> pos ;
				cout << s1[pos] << endl ;
				break ;
			case 3 :
				s1 < s2 ;
				break ;
			case 4 :
				s1 == s2 ;
				break ;
			case 5 : 
				s1 + s2 ;
				break ;
			case 6 :
				
				cin >> s3 ;
				s3.display();
				break ;
			case 7 :
				cout << s3 ;	
				break ;
			case 8 : exit (1);
				break ;
			default : cout << "Invalid choice " << endl ;			 
		}
	} while ( ch != 8 ) ;
	return 0 ;
}


