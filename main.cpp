#include <iostream>

using namespace std;

class Pet
{
protected:
    string name;
    string type;
    bool x;
public:
    Pet();
    Pet (string _name, string _type, bool y)
    {
        name= _name;
        type=_type;
        x=y;
    }
    virtual void printDescription(){}
};

class dog:public Pet
{
public:
    dog (){}
    dog (string _name, string _type, bool y):
    Pet (_name, _type, y){}
    void printDescription(){cout << name << " " << type << " " << x << " " << endl;}
};

class cat:public Pet
{
public:
    cat (){}
    cat (string _name, string _type, bool y):
    Pet (_name, _type, y){}
    void printDescription(){cout << name << " " << type << " " << x << " " << endl;}
};

class bird:public Pet
{
public:
    bird (){}
    bird (string _name, string _type , bool y):
    Pet (_name,_type, y){}
    void printDescription(){cout << name << " " << type << " " << x << " " << endl;}
};

int main()
{
    Pet* s1[3];
    s1[0]= new dog("huskey","dog",false);
    s1[1]= new cat("Lola","cat",true);
    s1[2]= new bird("parrot","bird",false);
    s1[0]->printDescription();
    s1[1]->printDescription();
    s1[2]->printDescription();
    return 0;
}
