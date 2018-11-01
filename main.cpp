#include <iostream>
#include <string>
#include <valarray>
#include "val.h"
using namespace std;

int main ()
{
    val Stack;
    Stack.push ('a');
    Stack.push ('b');
    Stack.push ('c');
    Stack.push ('r');
    cout << "the size of stack now is : "<< Stack.getSize() <<endl;
    cout << Stack.pop() << " ";
    cout << Stack.pop() << " ";
    cout << Stack.pop() << " ";
    cout << Stack.pop() << " " <<endl;
     Stack.Clear();
    cout <<"the size of stack now is : "<< Stack.getSize() <<endl;

}
