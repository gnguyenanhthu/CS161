#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <iostream>
using namespace std;
#include <math.h>

bool leapyear(int y);
int dom(int m, int y);
int findn(int d,int m,int y);
int findm(int d,int m,int y);
void tomorrow(int & d, int & m, int & y);
void yesterday(int & d, int & m, int & y);

#endif
