#ifndef VAL_H
#define VAL_H
#include "val.h"
#include <cstdlib>
#include <bits/stdc++.h>
#include <iostream>
#include <valarray>
#include <string>
using namespace std;
class val
{
private:
    enum  { Max =20} ;
    valarray <char> data[Max] ;
    int  Size;
public:
    val();
    //virtual ~stackValarray();
    bool isEmpty ();
    void Clear ();
    int getSize();
    char pop();
    void push(char v);
    void error (string message);


};

#endif // STACKVALARRAY_H
