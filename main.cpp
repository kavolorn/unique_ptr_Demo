#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    A() {
        cout << "A constructor is called." << endl;
    }
    virtual ~A() {
        cout << "A destructor is called" << endl;
    }
    virtual void output() {
        cout << "A outputs." << endl;
    }
};

class B : public A
{
public:
    B() {
        cout << "B constructor is called." << endl;
    }
    ~B() {
        cout << "B constructor is called" << endl;
    }
    void output() {
        cout << "B outputs." << endl;
    }
};

class C : public B
{
public:
    C() {
        cout << "C constructor is called." << endl;
    }
    ~C() {
        cout << "C destructor is called." << endl;
    }
    void output() {
        cout << "C outputs." << endl;
    }
};

int main(int argc, char ** argv)
{
    unique_ptr<B> p(new C()); 
    p->output();
    
    return 0;
}
