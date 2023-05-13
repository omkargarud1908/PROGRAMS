#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
    int img1;
    
    public:
        complex(int real=1,int img=1)
        {
            this->real=real;
            this->img=img;
        }  
        
        
        void display() 
        {
        
            cout<<real<<"+"<<img<<"i\n";
        
        } 
          
          void display1() 
        {
        
            cout<<real<<"+"<<img<<"i+"<<img1<<"i^2"<<endl;
        
        } 
          
        
        complex operator + (complex c2)
        {
            complex temp;
            temp.real=real+c2.real;
            temp.img=img+c2.img;
            return temp;
        }
         
         complex operator * (complex c2)
        {
            complex temp;
            temp.img=(real*c2.img)+(img*c2.real);
            temp.real=(real*c2.real);
            temp.img1=(img*c2.img);
            return temp;
        }
       
};




int main()
{
    complex  c1(7,5);
    complex c2(10,3);
    c1.display();
    c2.display();
    complex c3;
    
    c3=c1+c2;
    c3.display();
    c3=c1*c2;
    c3.display1();
 
}
