#include <iostream>
using namespace std;

class Father{
    protected:
    float height;
    char Eye_color[10] = "Brown";
};


class Mother{
    protected:
    char Hair_color[10] = "Black";
};

class Son: public Father, public Mother{
    protected:
    int age;
    public:
    void display(){
        height = 4.4;
        age = 12;
        cout<<"\nAge of Son: "<<age<<endl;
        cout<<"Height of Son: "<<height<<endl;
        cout<<"Hair Color : "<<Hair_color<<endl;
        cout<<"Eye Color: "<<Eye_color<<endl;

    }
};

int main(){
    Son s;
    s.display();
}