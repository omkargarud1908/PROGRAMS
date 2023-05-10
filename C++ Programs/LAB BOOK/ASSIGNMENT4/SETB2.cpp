#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    char* name;
    int length;
public:
    
    String(const char* str) {
        length = strlen(str);
        name = new char[length + 1];
        strcpy(name, str);
    }

    
    ~String() {
        delete[] name;
    }

   void combine(const char* str1, const char* str2) {
        length = strlen(str1) + strlen(str2);
        name = new char[length + 1];
        strcpy(name, str1);
        strcat(name, str2);
    }

    void display() {
        cout << "Combined String: " << name <<endl;
    }
};

int main() {
    char str1[20],str2[20];
    cout<<"Enter 1st string: "<<endl;
    cin>>str1;
    cout<<"Enter 2nd string: "<<endl;
    cin>>str2;
    String s1(str1);
    String s2(str2);
    s1.display();  
    s2.display();  

    s1.combine(str1,str2);
    s1.display();  

    return 0;
}
