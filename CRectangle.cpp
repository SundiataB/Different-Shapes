// file name: CRectangle.cpp
// Descriptions : An abstract class to escapluate the Triangle properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CRectangle.h"

CRectangle::CRectangle(void)
{
   m_numSides = 4;
   m_width = 2.3;
   m_height = 5.1;
   cout << "Rectangle class created (number of sides; " << m_width << "," << m_height << ")" << endl;
}
  
CRectangle::~CRectangle(void)
{
   cout << " Rectangle  class  destroyed " << endl;
}

double CRectangle::calcArea()
{
   return 0.0;
}

bool CRectangle::draw()
{
   
   cout << "Drawing Rectangle " << endl;
   return true;
}
