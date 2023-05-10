#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
Complex(){}
Complex(int r,int i){
real = r;
 img = i;
}
void putData(){
cout<<endl<<"Addition :"<<real<<" + "<<"i"<<img<<endl;
}
friend Complex add(Complex,Complex);
};
Complex add(Complex c1,Complex c2){
Complex temp;
temp.real = c1.real+c2.real;
temp.img = c1.img+c2.img;
return temp;
}
int main()
{
int r,i;
cout<<"Complex No. 1"<<endl;
cout<<"Real : ";
cin>>r;
cout<<"Imaginary : ";
cin>>i;
Complex c1(r,i);
cout<<endl<<"Complex No. 1"<<endl;
cout<<"Real : ";
cin>>r;
cout<<"Imaginary : ";
cin>>i;
Complex c2(r,i);
Complex c3 = add(c1,c2);
c3.putData();
return 1;
}
