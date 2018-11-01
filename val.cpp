#include "val.h"
#include <iostream>
using namespace std;
val:: val ()
    {
        Size = 0;
    }

    bool val:: isEmpty ()
    {
        if (Size == 0 )//&&  data[0].Size() == 0)
            return true;
        else
            return false;
    }

    void val:: Clear ()
    {
        Size = 0;
        for (int i =0 ; i < Max ; i++)
            data[i].resize(0);
        cout<<"Done !! "<<endl<< "The Stack is clear now "<<endl;

    }
    int val:: getSize()

    {


       return Size;
    }
    char val::pop()
    {
        if (Size == 0)
            error("Stack Underflow");
        char t = data[Size--][0];
        return t;
    }

    void val:: push(char v)
    {
        if (Size == Max)
            error("Stack Overflow");
        data[ ++Size ] = std :: valarray<char> (v,1);

    }

void val:: error (string message)
{
    cout << "\n" << message << "\n";
    exit (1);
}
