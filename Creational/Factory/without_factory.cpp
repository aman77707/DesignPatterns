#include <iostream>
using namespace std;


//Base class of vehicles
class shape{

    public:
    virtual void printShape() = 0;
};

//Derived class Rectangle
class rectangle: public shape{

    public:
    void printShape()
    {
        cout  << "This is rectangle class" << endl;
    }    
};

//Derived class sqaure 
class square : public shape{

    public:
    void printShape()
    {    
        cout << "This is square class" << endl;
    } 
};

class client{

    shape *s;

    public:
    client (int input)
    {
        if(input == 2)
            s = new rectangle();
        else if(input == 4)
            s = new square ();
        else
            s = NULL;
    }    
    shape * getShape(){
        return s;    
    }
};            
int main()
{
    client *c = new client(4);
    shape *s = c->getShape();
    if(s)
        s->printShape();
    else
        cout << "Shape type not supported" << endl;
    return 0;
}    

