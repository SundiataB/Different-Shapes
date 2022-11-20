// file name: CTriangle.cpp
// Descriptions : An abstract class to escapluate the Triangle properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CTriangle.h"

CTriangle::CTriangle(void)
{
   m_numSides = 3;
   
   cout << "Triangle class created (" << m_numSides << ")" << endl;
}
  
CTriangle::~CTriangle(void)
{
   cout << " Triangle  class  destroyed " << endl;
}

double CTriangle::calcArea()
{
   return 0.0;
}

bool CTriangle::draw()
{
      
   cout << "Drawing Triangle " << endl;
   return true;
}
