#include<iostream>
using namespace std;
class Department
{
 private:
        int Dept_id,no_of_faculty,no_of_students,Establish_year;
        char Dept_name[30];
 public:
        void accept()
        {
         cout<<"Enter Department name : ";
         cin>>Dept_name;
         cout<<"Enter Department ID : ";
         cin>>Dept_id;
         cout<<"Enter Department Establish Year : ";
         cin>>Establish_year;
         cout<<"Enter no of faculty : ";
         cin>>no_of_faculty;
         cout<<"Enter no of students : ";
         cin>>no_of_students;
        }
   
	int getId()
	{
		return Dept_id;
	}
	int getYear()
	{
		return Establish_year;
	}    
  
	void display(Department D[],int n,int Id)
	{ 
	int count=0;
      
		for(int i=0;i<n;i++)
		{ 
      			if(D[i].getId()==Id)
			{
			cout<<"Dept ID \tDept name \tEstablish year\tno of faculty \tno of students "<<endl;
			cout<<D[i].Dept_id<<"\t\t"<<D[i].Dept_name<<"\t\t"<<D[i].Establish_year<<"\t\t"<<D[i].no_of_faculty<<"\t\t"<<D[i].no_of_students<<endl;
			count++;
			break;
			}
		}
			if(count==0)
                	cout<<"\t No data found\t";
	}
	void display_details(Department D[],int n,int year)
	{ 
	int count=0;
      
	for(int i=0;i<n;i++)
        { 
		if(D[i].getYear()==year)
      		{
       		 count++; 
        		if(count==1) 
			cout<<"Dept ID \tDept name \tEstablish year\tno of faculty \tno of students "<<endl;
			cout<<D[i].Dept_id<<"\t\t"<<D[i].Dept_name<<"\t\t"<<D[i].Establish_year<<"\t\t"<<D[i].no_of_faculty<<"\t\t"<<D[i].no_of_students<<endl;
		}
	}
	if(count==0)
		cout<<"\t No data found\t";
   	}

}D[20];
int main()
{
	int n,Id,year;
	cout<<"Enter How may Department : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		D[i].accept();
	} 
	cout<<"Enter department ID to Display details : ";
	cin>>Id;
	D[0].display(D,n,Id);
 
	cout<<"Enter establish year to search department : ";
	cin>>year;
	D[0].display_details(D,n,year);
}
