#include <iostream>
using namespace std;

class student{
    protected:
        char name[20];
        int enroll;    
};

class computer : public student{
    protected:
        char department[25] = "Computer Department";
};

class sem3 : public computer{
    protected:
        float SPI;
    public:    
    void setdata(){
        cout<<"Enter your Name: ";
        gets(name);
        cout<<"Enter your Enrollment Number: ";
        cin>>enroll;
        cout<<"Enter Your SPI: ";
        cin>>SPI;
    }    
    void display(){
        cout<<endl<<"Name: "<<name<<endl;
        cout<<"Enrollment Number: "<<enroll<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"SPI: "<<SPI<<endl;
    }
};

int main()
{
    sem3 st1;
    st1.setdata();
    st1.display();
    return 0;
}