#include <iostream>
using namespace std;

//Base class of vehicles
class shape{

    public:
    virtual void printShape() = 0;
    static shape* decideShape(int);
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

class circle : public shape{

    public:
    void printShape()
    {    
        cout << "This is circle class" << endl;
    } 
};

shape * shape::decideShape(int input)
{
    shape *finalShape ;

    if(input == 2)
        //return new rectangle() ;
        finalShape = new rectangle();
    else if (input == 4)
        //return new square();
        finalShape = new square();
    else if (input == 6)
        //return new circle();
        finalShape = new circle();
    else 
        //return NULL ;
        finalShape = NULL ;

    return finalShape;
}    

class client{

    shape *s;

    public:
    client() 
    {
        int a ;
        cin >> a; 
        s = shape::decideShape(a);
    }    
    shape * getShape(){
        return s;    
    }
};            
int main()
{
    client *c = new client();
    shape *s = c->getShape();
    if(s)
        s->printShape();
    else
        cout << "Shape type not supported " << endl;
    return 0;
}    

